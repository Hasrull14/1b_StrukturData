#include <iostream>
#include <conio.h>
using namespace std;
int main(){
   
   int i, n , bil;
   int found=0;

   cout<<"masukkan panjang nilai : ";
   cin>>n;
   int nilai[n];

   //input nilai ke dalam array
   for(i=0;i<n;i++){
    cout<<"input angka ke-"<<i+1<<" : ";
    cin>>nilai[i];
   }

   //mencari bilangan
   cout<<"masukkan bilangan yang ingin di cari : ";
   cin>>bil;
   
   //menampilkan data array
   cout<<"Menampilkan data"<<endl;
   for(i=0;i<n;i++){
      cout<<nilai[i]<<" ";
   }
      cout<<endl;
      
   //pencarian
   i = 0;
   do{
      if(nilai[i]==bil){
         found = 1;
     }
     i++;
   }while(found==0 && i<n);

   
   if(found==1){
     cout<<"Bilangan "<<bil<<" Ditemukan di posisi indeks ke-"<<i-1<<endl;
   } else{
       cout<<"Bilangan "<<bil<<" Tidak Ditemukan";
     }
   getch();
   return 0;
}
