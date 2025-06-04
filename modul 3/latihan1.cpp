#include <iostream> 
using namespace std;

int main() {
    struct data_buku
    {
        char kode_buku[20];
        string nama_buku,pengarang;
        int harga,tahun_terbit;
    };

    int n;
    cout<<"Masukkan Jumlah Buku : ";
    cin>>n;

    data_buku tokoku[n];

    cout<<"\nMasukkan data buku"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\nInput Data Buku ke- "<<i+1<<endl;

        cout<<"Kode Buku :";
        cin>>tokoku[i].kode_buku;

        cout<<"Nama Buku :";
        cin.ignore();
        getline(cin,tokoku[i].nama_buku);

        
        cout<<"Tahun Terbit :";
        cin>>tokoku[i].tahun_terbit;

        cout<<"Pengarang :";
        cin.ignore();
        getline(cin,tokoku[i].pengarang);

        cout<<"Harga Buku :";
        cin>>tokoku[i].harga;
    }

    for(int i=0;i<n;i++){
        cout<<"\nBuku ke-"<<i+1<<endl;
        cout<<"Kode Buku : "<<tokoku[i].kode_buku<<endl;
        cout<<"Nama Buku :"<<tokoku[i].nama_buku<<endl;
        cout<<"Tahun Terbit :"<<tokoku[i].tahun_terbit<<endl;
        cout<<"Pengarang :"<<tokoku[i].pengarang<<endl;
        cout<<"Harga Buku : Rp"<<tokoku[i].harga<<endl;
    }
    

    system("pause");
    return 0;
}