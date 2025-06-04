 #include <iostream>
 #include <conio.h>
 using namespace std;
 int main(){
    int nilai[10] = {1,3,5,7,9,2,4,6,8,0};
    int i, n , bil;
    int found=0;
    n = 10;
    cout<<"masukkan bilangan yang ingin di cari : ";
    cin>>bil;
    //menampilkan data array
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
      cout<<"Bilangan "<<bil<<" Ditemukan pada posisi indeks ke-"<<i-1<<endl;
    } else{
        cout<<"Bilangan "<<bil<<" Tidak Ditemukan";
      }
    getch();
    return 0;
 }
