#include <iostream> 
using namespace std;

struct node {
    int data;
    node *prev;
    node *next;
};

node *head, *hapus, *insert, *cari;
int x;

//fungsi untuk menampilkan double linked list secara runtut maju & runtut mundur
void tampil(){
    node *bantu, *bantu2;
    bantu = head;

    while(bantu != NULL){
        bantu2 = bantu; //mengatur bantu 2 ke node terakhir
        cout<<bantu->data<<" ";
        bantu = bantu->next;
    };

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

    head->next->next->data = 30;
    head->next->next->prev = head->next;
    head->next->next->next = NULL;

    cout<<"Data awal : ";
    tampil();

    system("pause");
    return 0;
}