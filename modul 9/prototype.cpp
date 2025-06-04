#include <iostream> 
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head, *insert, *bantu, *hapus, *cari;
int x;

void tampil(){
    bantu = head;
    while(bantu!=NULL){
        cout<<bantu->data<<" ";
        bantu=bantu->next;
    }
    cout<<endl;
}
int main() { 
    //insert di awal node
    insert = new node;
    insert->data = 20;
    insert->next = head;

    head = insert;

    cout<<"data insert di awal node : ";
    tampil();
    

     //delete node tertentu
    // cout<<"Masukkan data yang akan dicari : ";
    // cin>>x;
    // cari = head;

    // if(head != NULL && head->data==x){
    //     hapus = head; 
    //     head = hapus->next;
    //     delete hapus;
    // } else{
    //     while(cari->next!=NULL && cari->next->data != x){
    //         cari = cari->next;
    //     }

    //     if(cari->next!=NULL){
    //         hapus = cari->next;
    //         cari->next = hapus->next;
    //         hapus->next = NULL;
    //         delete hapus;
    //     }else{
    //         cout<<"data tidak diketemukan "<<endl;
    //     }
    // }
    // cout<<"data delete node "<<x<<" : ";
    // tampil();



    //delete setelah delete node terakhir 
    cari = head;
    if(cari->next==NULL){
        hapus = head;
        head = NULL;
        delete hapus;
    }else{
        while(cari->next->next != NULL){
            cari = cari->next;
        }
        hapus = cari->next;
        cari->next = NULL;
        delete hapus;
    }

    cout<<"Data setelah delete node terakhir : ";
    tampil();



    system("pause");
    return 0;
}