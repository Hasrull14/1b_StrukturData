#include <iostream> 
#include <vector> 
using namespace std;
void swap(int &a,int &b);


int main() {
    unsigned int i,j,k,no=1;
    char status;

    vector<int>data;

    do{
        cout<<"Data ke-"<<no<<" : ";
        cin>>k;
        no++;

        data.push_back(k);

        cout<<"Input data lagi? (y/n)";
        cin>>status;
    }while(status=='y'||status=='Y');

    //proses asc
    for(i=data.size()-1;i>0;i--){
        for(j=0;j<i;j++){
            if(data[j+1]<data[j]){
                swap(data[j],data[j+1]);
            }
        }
    }

    //menampilkan data asc
    cout<<"\nHasil pengurutan dengan metode buble sort"<<endl;
    cout<<"Menaik : ";
    for(i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }

    //proses desc
    for(i=data.size()-1;i>0;i--){
        for(j=0;j<i;j++){
            if(data[j+1]>data[j]){
                swap(data[j],data[j+1]);
            }
        }
    }

    //menampilkan data desc
    cout<<"\nHasil pengurutan dengan metode buble sort"<<endl;
    cout<<"Menurun : ";
    for(i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }


    cin.get();
    return 0;
}



void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}