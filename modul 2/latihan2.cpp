#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double a[5],avg=0;

    //input
    cout<<"Masukkan 5 nilai "<<endl;
    for(int i=0;i<5;i++){
        cout<<"a["<<i<<"] : ";
        cin>>a[i];
    }

    //output
   
    for(int j=0;j<5;j++){
        avg += a[j];
    }
    avg /=5;
    cout<<"Nilai rata-rata adalah: "<<avg<<endl;

    getch();
    return 0;
}