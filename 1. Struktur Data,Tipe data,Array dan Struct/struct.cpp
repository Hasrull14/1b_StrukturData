#include <iostream>
using namespace std;

int main(){
    struct masyarakat{
        string nama,alamat;
        int usia;
        string hobi[2];
    };

    masyarakat mys[2];

    mys[0].nama = "paijo";
    mys[0].alamat = "dorenan";
    mys[0].usia = 20;
    mys[0].hobi[0] = "njegok";
    mys[0].hobi[1] = "masak";


    mys[1].nama = "longo";
    mys[1].alamat = "doren";
    mys[1].usia = 20;
    mys[1].hobi[0] = "lari";
    mys[1].hobi[1] = "calistenic";


    cout<<mys[0].nama<<endl;
    cout<<mys[0].alamat<<endl;
    cout<<mys[0].usia<<endl;
    cout<<mys[0].hobi[0]<<endl;
    cout<<mys[0].hobi[1]<<endl;

    cout<<mys[1].nama<<endl;
    cout<<mys[1].alamat<<endl;
    cout<<mys[1].usia<<endl;
    cout<<mys[1].hobi[0]<<endl;
    cout<<mys[1].hobi[1]<<endl;

    return 0;
}



