#include <iostream>
#include <conio.h>
void swap(int &a, int &b);
using namespace std;
int main(){
   int nilai[10] = {1,3,5,7,9,2,4,13,8,0};
   int i, n , j, bil, awal, akhir, tengah;
   n = 10;
   bil = 7;
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