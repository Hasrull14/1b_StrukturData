#include <iostream> 
using namespace std;

struct node {
    int data;
    node *prev;
    node *next;
};

node *head, *hapus, *insert, *cari;
int x;

//fungsi untuk menampilkan double linked list
void tampil(){
    node *bantu;
    bantu = head;

    while(bantu != NULL){
        cout<<bantu->data<<" ";
        bantu = bantu->next;
    }; cout<<endl;
}

int main() {
    //pengisian double linked list secara manual
    head = new node;
    head->data = 10;
    head->prev = NULL;
    head->next = new node;

    head->next->data = 20;
    head->next->prev = head;
    head->next->next = new node;

    head->next->next->data = 40;
    head->next->next->prev = head->next;
    head->next->next->next = NULL;

    cout<<"Data awal : ";
    tampil();


    //insert di awal node
    insert = new node;
    insert->data = 5;
    insert->next = head;
    insert->prev = NULL;
    head->prev = insert;
    head = insert;

    cout<<"Data setelah insert di awal : ";
    tampil();


    //insert setelah node terakhir
    node *tail;
    insert = new node;
    insert->data = 50;
    insert->next = NULL;
    insert->prev = NULL;

    tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = insert;
    insert->prev = tail;
    tail = insert;

    cout<<"Data setelah insert di akhir : ";
    tampil();


    //insert sebelum node tertentu
    x = 50;
    insert = new node;
    insert->data = 11;
    insert->next = NULL;
    insert->prev = NULL;

    if(head->data == x){
        insert->next = head;
        head->prev = insert;

        head = insert;
    }else{
        cari = head;
        while(cari->next != NULL && cari->next->data != x){
            cari = cari->next;
        }

        if(cari->next!=NULL){
            insert->next = cari->next;
            cari->next->prev = insert;

            cari->next = insert;
            insert->prev = cari;
        }

    }
    cout<<"Data setelah insert sebelum "<<x<<" : ";
    tampil();   


    //insert setelah node tertentu 
    x = 50;
    insert = new node;
    insert->data = 15;
    insert->next = NULL;
    insert->prev = NULL;

    cari = head;
    while(cari->data != x && cari->next!=NULL){
        cari = cari->next;
    }
    if(cari->data == x){
        if(cari->next == NULL){
            cari->next = insert;
            insert->prev = cari;
        }else{
            insert->next = cari->next;
            cari->next->prev = insert;

            cari->next = insert;
            insert->prev = cari;
        }
    }else{
        cout<<"data tidak ditemukan "<<endl;
    }
    cout<<"Data setelah insert setelah "<<x<<" : ";
    tampil();

    system("pause");
    return 0;
}

