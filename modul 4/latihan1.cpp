#include <iostream> 
using namespace std;
void swap(int &a,int &b);

int main() {
    int i,j,n;
    cout<<"Masukkan jumlah data : ";
    cin>>n;

    //input data
    int data[n];
    for(i=0;i<n;i++){
        cout<<"Data ke-"<<i+1<<" : ";
        cin>>data[i];
    }

    //proses asc
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(data[j+1]<data[j]){
                swap(data[j],data[j+1]);
            }
        }
    }

    //menampilkan data asc
    cout<<"\nHasil pengurutan dengan metode buble sort"<<endl;
    cout<<"Menaik : ";
    for(i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    //proses desc
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(data[j+1]>data[j]){
                swap(data[j],data[j+1]);
            }
        }
    }

    //menampilkan data desc
    cout<<"Menurun : ";
    for(i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}

void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}