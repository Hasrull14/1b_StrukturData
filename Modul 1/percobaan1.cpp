#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int awal,akhir;
    cout<<"Nilai awal: "; cin>>awal;
    cout<<"Nilai akhir: "; cin>>akhir;

    do{
        if(awal%2==0){
            cout<<awal<<" Genap"<<endl;
        }else{
            cout<<awal<<" Ganjil"<<endl;
        }
       
        awal++;
    }while(awal<=akhir);

    getch();
    return 0;
}
