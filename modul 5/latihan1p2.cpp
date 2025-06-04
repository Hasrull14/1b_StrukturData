#include <iostream>
#include <conio.h>
void swap(int &a, int &b);
using namespace std;
int main(){
  
   int i, n , j, bil, awal, akhir, tengah;

   cout<<"Masukkan Panjang Nilai : ";
   cin>>n;
   int nilai[n];

   //Input nilai ke dalam array
   for(i=0;i<n;i++){
    cout<<"Input angka ke-"<<i+1<<" : ";
    cin>>nilai[i];
   }

   //Mencari bilangan
   cout<<"Masukkan Bilangan yang ingin dicari : ";
   cin>>bil;

   //menampilkan data array
   cout<<"Data sebelum diurutkan"<<endl;
   for(i=0;i<n;i++){
    cout<<nilai[i]<<" ";
   }cout<<endl;
  
   //proses pengurutan
   for(i=n-1;i>0;i--){
    for(j=0;j<i;j++){
        if(nilai[j+1]<nilai[j]){
            swap(nilai[j+1],nilai[j]);
        }
    }
   }
 
   //menampilkan data terurut
   cout<<"Data sesudah diurutkan"<<endl;
   for(i=0;i<n;i++){
    cout<<nilai[i]<<" ";
   }cout<<endl;
  
   //pencarian data
   awal = 0;
   akhir = n-1;
   do{
       tengah = (akhir + awal)/2;
       if(bil < nilai[tengah])
           akhir = tengah - 1;
       else
           awal = tengah + 1;
   } while((akhir >= awal)&&(nilai[tengah] != bil));
   
   if(nilai[tengah]==bil){
       cout<<"Bilangan "<<bil<<" Ditemukan ";
       cout<<"pada posisi indeks ke-"<<tengah;
   }
   else
       cout<<"Bilangan "<<bil<<" Tidak Ditemukan";
   getch();
   return 0;
}

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}