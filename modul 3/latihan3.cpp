#include <iostream> 
using namespace std;

int main() {
    
    struct data_penjualan {
        string nama_barang;
        float jumlah, harga_satuan;
    };
    int n;
    cout<<"Masukkan jumlah total barang yang akan dihitung"; cin>>n;
    
    data_penjualan minimart[n];

    int i=0;
    char status = 'y';
    while(status == 'y' || status=='Y'){
        cout<<"Masukkan data barang "<<endl;
        cout<<endl;
        cout<<"Nama Barang : ";
        cin>>minimart[i].nama_barang;

        cout<<"Jumlah : ";
        cin>>minimart[i].jumlah;

        cout<<"Harga Satuan : ";
        cin>>minimart[i].harga_satuan;
        cout<<endl;
        i++;
        cout<<"Ingin memasukkan lagi? (Y/N)";
        cin>>status;
       
    }

    float sub_total;
    float total = 0;
    cout<<"Nama Barang | Jml | Harga | Subtotal"<<endl;
    cout<<"===================================="<<endl;
    for(int j=0;j<n;j++){
        sub_total = minimart[j].jumlah * minimart[j].harga_satuan;
        total+=sub_total;
        cout<<minimart[j].nama_barang<<"       "<<minimart[j].jumlah<<"     "<<minimart[j].harga_satuan<<"     "<<sub_total<<endl;
    }

    cout<<"------------------------------------"<<endl;
    cout<<"Total                       "<<total<<endl;

    system("pause");
    return 0;
}