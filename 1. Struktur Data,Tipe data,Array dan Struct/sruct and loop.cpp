#include <iostream>
using namespace std;

int main(){
    struct masyarakat{
        string nama,alamat,id;
        int usia;
    };

    int n;
    cout<<"masukkan panjang nilai = ";
    cin>>n;

    masyarakat mys[n];

    for(int i=0;i<n;i++){
        cout<<"Data ke - "<<i+1<<endl;

        cout<<"masukkan id : ";
        cin>>mys[i].id;
        cout<<"masukkan nama : ";
        cin>>mys[i].nama;
        cout<<"masukkan alamat : ";
        cin>>mys[i].alamat;
        cout<<"masukkan usia : ";
        cin>>mys[i].usia;
    }


    for(int i=0;i<n;i++){
        cout<<"Data ke - "<<i+1<<endl;

        cout<<"ID = "<<mys[i].id<<endl;
        cout<<"Nama = "<<mys[i].nama<<endl;
        cout<<"Alamat = "<<mys[i].alamat<<endl;
        cout<<"Usia = "<<mys[i].usia<<endl;
    }
    
    system("pause");
    return 0;
}



