#include <iostream> 
#include <conio.h>
using namespace std;

struct node
{
    int data;
    node *next; //menyimpan alamat baru dari node selanjutnya
};

node *head, *temp, *insert;
int x;

//fungsi untuk menampilkan data linked list
void tampil(){
    node *bantu;
    bantu = head;
    while(bantu != NULL){
        cout<<bantu->data<<" ";
        bantu=bantu->next;
    }
    cout<<endl;
}

int main() {
    //pengisian single linked list secara manual
    head = new node;
    head->data=10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->data = 40;
    head->next->next->next = NULL;
    cout<<"Data awal : ";
    tampil();

    //insert di awal node
    insert = new node;
    insert->data = 5;
    insert->next = head;
    head = insert; 
    cout<<"Data insert di awal : ";
    tampil();


    //insert setelah node tertentu (x)
    x = 11;
    insert = new node;
    insert->data=35;
    insert->next=NULL;
    node *after;
    after = head;
    while (after->data != x && after->next != NULL){
        after = after->next;
    }
    if(after->data == x){
        insert->next=after->next;
        after->next = insert;
    }else{
        cout<<"Data tidak ditemukan"<<endl;
    }
    cout<<"Data setelah insert setelah 10 : ";
    tampil();

    //insert sebelum node tertentu
    x = 20;
    insert = new node;
    insert->data = 15;
    insert->next = NULL;

    //jika disisipkan di depan head
    if(head != NULL && head->data==x){
        insert->next = head;
        head = insert;
    } else {
        node *prev = head;
        while (prev->next != NULL && prev->next->data != x){
            prev = prev->next;
        }

        if(prev->next != NULL){
            insert->next = prev->next;
            prev->next = insert ;
        }else{
            cout<<"data tidak ditemukan"<<endl;
        }
    }
    cout<<"Data setelah insert sebelum 20 : ";
    tampil();



    //insert di akhir node
    insert = new node;
    insert->data = 50;
    insert->next = NULL;

    node *tail = head;
    while(tail->next != NULL){ //mencari next terakhir yaitu null
        tail = tail->next;
    }

    tail->next = insert; //lalu tail -> next = null diganti dengan insert, supaya next ke node insert
    cout<<"Data insert di akhir : ";
    tampil();


    //menghapus keseluruhan
    // Hapus seluruh node untuk mencegah memory leak
    node *hapus;
    while (head != NULL) {
        hapus = head;
        head = head->next;
        delete hapus;
    }
    
    getch();
    return 0;
}





//pointer mengakses berdasarkan alamat bukan berdasarkan variabel