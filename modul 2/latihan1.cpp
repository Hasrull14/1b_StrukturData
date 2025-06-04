#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double a[5];

    //input
    cout<<"Masukkan 5 angka "<<endl;
    for(int i=0;i<5;i++){
        cout<<"a["<<i<<"] : ";
        cin>>a[i];
    }

    //output
    cout<<"Menampilkan angka dengan urutan index besar ke kecil  "<<endl;
    for(int j=4;j>=0;j--){
        cout<<"a["<<j<<"] = "<<a[j]<<endl;
    }
    getch();
    return 0;
}