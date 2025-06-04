#include <iostream> 
using namespace std;

int main() {

    struct alamat
    {
        string jalan,kota;
        int kode_pos;
    };
    
    struct biodata
    {
        char nip[20];
        string nama,departemen;
        alamat alamat_pegawai;
    };

    int n;
    cout<<"Masukkan jumlah pegawai : ";
    cin>>n;
    biodata pegawai_pos[n];

    //input
    cout<<"\nData Kantor Pos"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\nInput Data ke-"<<i+1<<endl;
        cout<<"nip :";
        cin>>pegawai_pos[i].nip;

        cout<<"nama :";
        cin.ignore();
        getline(cin,pegawai_pos[i].nama);

        cout<<"departemen :";
        getline(cin,pegawai_pos[i].departemen);

        cout<<"alamat"<<endl;
        cout<<"jalan : ";
        cin>>pegawai_pos[i].alamat_pegawai.jalan;
        cout<<"kota : ";
        cin>>pegawai_pos[i].alamat_pegawai.kota;
        cout<<"kode pos : ";
        cin>>pegawai_pos[i].alamat_pegawai.kode_pos;
    }

    //output
    for(int i=0;i<n;i++){
        cout<<"\nData ke-"<<i+1<<endl;
        cout<<"NIP : "<<pegawai_pos[i].nip<<endl;
        cout<<"nama :"<<pegawai_pos[i].nama<<endl;
        cout<<"departemen : "<<pegawai_pos[i].departemen<<endl;
        cout<<"alamat"<<endl;
        cout<<"jalan : "<<pegawai_pos[i].alamat_pegawai.jalan<<endl;
        cout<<"kota : "<<pegawai_pos[i].alamat_pegawai.kota<<endl;
        cout<<"kode pos : "<<pegawai_pos[i].alamat_pegawai.kode_pos<<endl;
    }
    

    system("pause");
    return 0;
}