#include <iostream>
using namespace std;

int main(){
    struct masyarakat{
        string nama,alamat;
        int usia;
        string hobi[2]; //deklarasi array dalam struct
    };
    masyarakat data_diri; //deklarasi variabel bertipe struct
    masyarakat mys[2]; //deklarasi variabel bertipe array struct/struct dalam array

    //pengisian struct dalam array
    mys[0].nama = "alex";
    mys[0].alamat = "kediri";
    mys[0].usia = 20;
    mys[0].hobi[0] = "surfing"; //pengisian array dalam struct
    mys[0].hobi[1] = "kreator"; //pengisian array dalam struct

    mys[1].nama = "kevin";
    mys[1].alamat = "nganjuk";
    mys[1].usia = 24;
    mys[1].hobi[0] = "masak"; //pengisian array dalam struct
    mys[1].hobi[1] = "olahraga"; //pengisian array dalam struct

    //pengisian struct
    data_diri.nama = "Hasrul";
    data_diri.alamat = "Tulungagung";
    data_diri.usia = 20;
    data_diri.hobi[0] = "game"; //pengisian array dalam struct
    data_diri.hobi[1] = "olahraga"; //pengisian array dalam struct

    //Menampilkan data struct dalam array
    cout<<">>Data Masyarakat<<"<<endl;
    cout<<"---Data 1---"<<endl;
    cout<<"nama = "<<mys[0].nama<<endl;
    cout<<"alamat = "<<mys[0].alamat<<endl;
    cout<<"usia = "<<mys[0].usia<<endl;
    cout<<"hobi 1 = "<<mys[0].hobi[0]<<endl; //Menampilkan data array dalam struct
    cout<<"hobi 2 = "<<mys[0].hobi[1]<<endl; //Menampilkan data array dalam struct

    cout<<"---Data 2---"<<endl;
    cout<<"nama = "<<mys[1].nama<<endl;
    cout<<"alamat = "<<mys[1].alamat<<endl;
    cout<<"usia = "<<mys[1].usia<<endl;
    cout<<"hobi 1 = "<<mys[1].hobi[0]<<endl; //Menampilkan data array dalam struct
    cout<<"hobi 2 = "<<mys[1].hobi[1]<<endl; //Menampilkan data array dalam struct

    //menampilkan struct
    cout<<">>Data diri<<"<<endl;
    cout<<"nama = "<<data_diri.nama<<endl;
    cout<<"alamat = "<<data_diri.alamat<<endl;
    cout<<"usia = "<<data_diri.usia<<endl;
    cout<<"hobi 1 = "<<data_diri.hobi[0]<<endl; //Menampilkan data array dalam struct
    cout<<"hobi 2 = "<<data_diri.hobi[1]<<endl; //Menampilkan data array dalam struct

    cin.get();
    return 0;
}



