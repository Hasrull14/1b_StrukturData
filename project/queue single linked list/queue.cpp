#include <iostream> 
using namespace std;

struct node{
    int data;
    node *next;
};


void menu(){
    cout<<"\n------Operasi Queue------"<<endl;
    cout<<"[1] ENQUEUE"<<endl;
    cout<<"[2] DEQUEUE"<<endl;
    cout<<"[3] CETAK"<<endl;
    cout<<"[4] CLEAR"<<endl;
    cout<<"[5] KELUAR"<<endl;
}

node *head, *tail, *bantu, *insert, *cari, *hapus;
int main() {
    int pilih, angka;

    do{
        system("cls");
        menu();
        cout<<"Masukkan Pilihan ";
        cin>>pilih;

        switch (pilih)
        {
        case 1:
            cout<<"Masukkan Angka : ";
            cin>>angka;

            insert = new node;
            insert->data = angka;
            insert->next = NULL;

            tail = head;
            if(head==NULL){
                head = insert;
            }else{
                while(tail->next != NULL){
                    tail = tail->next;
                }
                tail->next = insert;
            }
            system("pause");
            break;
        case 2:
            if(head!=NULL){
                cout<<"Data : "<<head->data<<" telah dihapus"<<endl;
                hapus = head;
                head = hapus->next;
                hapus->next = NULL;
                delete hapus;
            }else{
                cout<<"QUeue Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 3:
            cout<<"Isi Queue : ";
            if(head != NULL){
                bantu = head;
                while(bantu!=NULL){
                    cout<<bantu->data<<" ";
                    bantu = bantu->next;
                }cout<<endl;
            }else{
                cout<<"Queue Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 4:
            if(head != NULL){
                while(head!=NULL){
                    hapus = head;
                    head = head->next;
                    hapus->next = NULL;
                    delete hapus;
                }
                cout<<"Queue telah dikosngkan"<<endl;
            }else{
                cout<<"Queue Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 5:
            cout<<"Anda telah Keluar dari Program"<<endl;
            break;
        default:
            cout<<"Pilih Menu yang tersedia ! "<<endl;
            system("pause");
        }
    }while(pilih != 5);


    while(head!=NULL){
        hapus = head;
        head = head->next;
        hapus->next = NULL;
        delete hapus;
    }
    cin.get();
    return 0;
}