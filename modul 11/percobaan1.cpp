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
    // x = 50;
    // insert = new node;
    // insert->data = 11;
    // insert->next = NULL;
    // insert->prev = NULL;

    // if(head->data == x){
    //     insert->next = head;
    //     head->prev = insert;

    //     head = insert;
    // }else{
    //     cari = head;
    //     while(cari->next != NULL && cari->next->data != x){
    //         cari = cari->next;
    //     }

    //     if(cari->next!=NULL){
    //         insert->next = cari->next;
    //         cari->next->prev = insert;

    //         cari->next = insert;
    //         insert->prev = cari;
    //     }

    // }

    //insert sebelum node tertentu (modul)
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
        while(cari->data != x && cari->next != NULL){
            cari = cari->next;
        }

        if(cari->data==x){
            insert->next = cari;
            insert->prev = cari->prev;
            cari->prev->next = insert;
            cari->prev = insert; 
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


    //--------OPERASI DELETE------------
    //Delete di awal node
    hapus = head;
    head = head->next;
    head->prev = NULL;
    hapus->next = NULL;
    delete hapus;
    cout<<"Data setelah delete node awal : ";
    tampil();

    //delete setelah node tertentu
    cout<<"Masukkan data yang akan dicari : ";
    cin>>x;
    cari = head;
    while(cari->data != x && cari->next != NULL){
        cari = cari->next;
    }
    if(cari->data == x){
        if(cari->next == NULL){//jika elemen selanjutnya adalah NULL
            cout<<"tidak ada elemen selanjutnya"<<endl;
        } else if(cari->next->next==NULL){//jika elemen selanjutnya adalah tail
            hapus = cari->next;
            cari->next = NULL;
            hapus->prev = NULL;
            delete hapus;
        }else {//jika elemen selanjutnya bukan NULL
            hapus = cari->next;
            cari->next = hapus->next;
            hapus->next->prev = cari;
            hapus->next = NULL;
            hapus->prev = NULL;
            delete hapus;
        }
    }else{
        cout<<"data tidak ditemukan"<<endl;
    }
    cout<<"Delete node setelah "<<x<<" : ";
    tampil();

    //delete node akhir
    hapus = head;
    if(hapus->next==NULL){
        head = NULL;
        delete hapus;
    }else{
        while(hapus->next != NULL){
            hapus = hapus->next;
        }
    }
    hapus->prev->next = NULL;
    hapus->prev = NULL;
    delete hapus;
    
    cout<<"Data setelah delete node terakhir : ";
    tampil();

    
    system("pause");
    return 0;
}

