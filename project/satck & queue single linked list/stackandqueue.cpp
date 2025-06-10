#include <iostream> 
using namespace std;

struct node{
    int data;
    node *next;
};


void menu(){
    cout<<"\n------Operasi Queue & Stack------"<<endl;
    cout<<"[1] ENQUEUE / PUSH"<<endl;
    cout<<"[2] POP"<<endl;
    cout<<"[3] DEQUEUE"<<endl;
    cout<<"[4] CETAK"<<endl;
    cout<<"[5] CLEAR"<<endl;
    cout<<"[6] KELUAR"<<endl;
}

node *head, *tail, *bantu, *insert, *hapus;
int main() {
    int pilih, angka;

    do{
        system("cls");
        menu();
        cout<<"Masukkan Pilihan : ";
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
            if(head != NULL){
                tail = head;
                if(head->next == NULL){
                    cout<<"Data : "<<head->data<<" telah dihapus"<<endl;
                    head = NULL;
                } else {
                    while (tail->next->next != NULL) {
                        tail = tail->next;
                    }
                    cout<<"Data : "<<tail->next->data<<" telah dihapus "<<endl; //cara 1
                    hapus = tail->next;
                    cout<<"Data : "<<hapus->data<<" telah dihapus"<<endl; //cara 2
                    tail->next = NULL;
                    delete hapus;
                }
            }else{
                cout<<"Gudang kosong ! "<<endl;
            }
            
            system("pause");
            break;
        case 3:
            if(head!=NULL){
                cout<<"Data : "<<head->data<<" telah dihapus"<<endl;
                hapus = head;
                head = hapus->next;
                hapus->next = NULL;
                delete hapus;
            }else{
                cout<<"Gudang Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 4:
            cout<<"Isi Gudang : ";
            if(head != NULL){
                bantu = head;
                while(bantu!=NULL){
                    cout<<bantu->data<<" ";
                    bantu = bantu->next;
                }cout<<endl;
            }else{
                cout<<"Gudang Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 5:
            if(head != NULL){
                while(head!=NULL){
                    hapus = head;
                    head = head->next;
                    hapus->next = NULL;
                    delete hapus;
                }
                cout<<"Gudang telah dikosngkan"<<endl;
            }else{
                cout<<"Gudang Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 6:
            cout<<"Anda telah Keluar dari Program"<<endl;
            break;
        default:
            cout<<"Pilih Menu yang tersedia ! "<<endl;
            system("pause");
        }
    }while(pilih != 6);


    while(head!=NULL){
        hapus = head;
        head = head->next;
        hapus->next = NULL;
        delete hapus;
    }
    cin.get();
    return 0;
}