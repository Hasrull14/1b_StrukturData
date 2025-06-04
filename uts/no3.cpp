#include <iostream> 
using namespace std;

void swap(int &a, int &b);

int main() {

    int i, j,jml;

    cout<<"masukkan panjang data : ";
    cin>>jml;

    int data[jml];

    //cara 1
    // for (i = 0; i < jml; i++){
    //     cout<<"masukkan data ke-"<<i+1<<" : ";
    //     cin>>data[i];
    // } 

    //cara 2
    cout<<"masukkan data : ";
    for (i = 0; i < jml; i++){
        cin>>data[i];
    } 

    cout << "Data awal: ";
    for (i = 0; i < jml; i++){
        cout << data[i] << " ";
    } cout << endl;

    cout<<"pengurutan dengan insertion asc"<<endl;

    for (i = 0; i < jml; i++){
        j = i;
        
        while (j > 0){
            if (data[j] < data[j - 1]){
                swap(data[j], data[j - 1]);
            }
            cout<<"langkah "<<i<<" = ";
            for(int k=0;k<jml;k++){
            cout<<data[k]<<" ";
            }
            cout<<endl;
            j--;
        }
    }

    cout<<"\nhasil akhir = ";
    for(int k=0;k<jml;k++){
        cout<<data[k]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}


void swap(int &a, int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;

}
