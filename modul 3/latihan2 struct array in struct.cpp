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
        alamat alamat_pegawai[2];
    };

    int n;
    cout<<"Masukkan jumlah pegawai : ";
    cin>>n;
    biodata pegawai_pos[2];

    // //input
    // cout<<"\nData Kantor Pos"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<"\nInput Data ke-"<<i+1<<endl;
    //     cout<<"nip :";
    //     cin>>pegawai_pos[i].nip;

    //     cout<<"nama :";
    //     cin.ignore();
    //     getline(cin,pegawai_pos[i].nama);

    //     cout<<"departemen :";
    //     getline(cin,pegawai_pos[i].departemen);

    //     cout<<"alamat"<<endl;
    //     for(int j=0;j<2;j++){
    //         cout<<"jalan : ";
    //         cin>>pegawai_pos[i].alamat_pegawai[j].jalan;
    //         cout<<"kota : ";
    //         cin>>pegawai_pos[i].alamat_pegawai[j].kota;
    //         cout<<"kode pos : ";
    //         cin>>pegawai_pos[i].alamat_pegawai[j].kode_pos;
    //     }

        
        
    // }

    //pengisian data
    pegawai_pos[0]={1233,"hasrul waliudin","japan",{{ "jatirejo","tulungagung",66281 },{"mojoroto","kediri",66286}}};
    pegawai_pos[1]={1233,"hasrul waliudin","japan",{{ "jatirejo","tulungagung",66281 },{"mojoroto","kediri",66286}}};

    //output
    for(int i=0;i<n;i++){
        cout<<"\nData ke-"<<i+1<<endl;
        cout<<"NIP : "<<pegawai_pos[i].nip<<endl;
        cout<<"nama : "<<pegawai_pos[i].nama<<endl;
        cout<<"departemen : "<<pegawai_pos[i].departemen<<endl;
        cout<<"alamat"<<endl;
        for(int j =0;j<2;j++){
            cout<<"jalan : "<<pegawai_pos[i].alamat_pegawai[j].jalan<<endl;
            cout<<"kota : "<<pegawai_pos[i].alamat_pegawai[j].kota<<endl;
            cout<<"kode pos : "<<pegawai_pos[i].alamat_pegawai[j].kode_pos<<endl;
        }
        
    }
    

    system("pause");
    return 0;
}