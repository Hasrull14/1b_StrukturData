#include <iostream> 
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};

node *head, *hapus, *insert, *cari, *tail;
int x;

//fungsi untuk menampilkan double linked list
void tampil(){
    node *bantu, *bantu2;

    //menampilkan data dari depan dengan node head
    bantu = head;
    while(bantu != NULL){
        tail = bantu; //cara 1 menentukan tail
        cout<<bantu->data<<" ";
        bantu = bantu->next;
    };
    cout<<endl;

    //cara 2 menentukan tail
    // //mencari node terakhir, lalu set tail menjadi node terakhir
    // tail = head;
    // while(tail->next != NULL){
    //     tail=tail->next;
    // }

    //menampilkan data dari belakang dengan node tail
    bantu2 = tail;
    while(bantu2 != NULL){
        cout<<bantu2->data<<" ";
        bantu2 = bantu2->prev;
    }
    cout<<endl;

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

    system("pause");
    return 0;
}