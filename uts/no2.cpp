#include <iostream> 
using namespace std;

int main() {

    struct Buku
    {
        char kode_buku[10];
        string nama_buku;
        int tahun_terbit;
        string pengarang;
        int harga;
    };

    int n, i;
    cout<<"Masukkan panjang data : ";
    cin>>n;

    Buku mybook[n];

    for(i=0;i<n;i++){
        cout<<"\nInput Data Ke - "<<i+1<<endl;
        cout<<"masukkan kode buku : ";
        cin>>mybook[i].kode_buku;

        cin.ignore();
        cout<<"masukkan nama buku : ";
        getline(cin,mybook[i].nama_buku);

        cout<<"masukkan tahun terbit : ";
        cin>>mybook[i].tahun_terbit;

        cin.ignore();
        cout<<"masukkan nama pengarang : ";
        getline(cin,mybook[i].pengarang);

        cout<<"masukkan harga buku : ";
        cin>>mybook[i].harga;
    }

    for(i=0;i<n;i++){
        cout<<"\nCetak Data Ke - "<<i+1<<endl;
        cout<<"kode buku : "<<mybook[i].kode_buku<<endl;
        cout<<"nama buku : "<<mybook[i].nama_buku<<endl;
        cout<<"tahun terbit : "<<mybook[i].tahun_terbit<<endl;;
        cout<<"nama pengarang : "<<mybook[i].pengarang<<endl;
        cout<<"harga buku : "<<mybook[i].harga<<endl;

    }

    system("pause");
    return 0;
}