#include <iostream>
using namespace std;

int main(){
    int awal,akhir,jml;

    cout<<"Masukkan bilangan awal : "; cin>>awal;
    cout<<"Masukkan bilangan akhir : "; cin>>akhir;

    cout<<"Jumlah bilangan kelipatan 3 antara "<<awal;

    jml=0;
    while(awal<=akhir){
        if(awal%3==0){
            jml++;
        }
        awal++;
    }

    cout<<" dan "<<akhir<<" adalah : "<<jml<<" bilangan"<<endl;

    system("pause");
    return 0;
}