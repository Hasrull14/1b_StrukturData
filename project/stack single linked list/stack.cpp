#include <iostream> 
using namespace std;

struct node{
    int data;
    node *next;
};

node *head, *tail, *bantu, *hapus, *insert;

void menu(){
    cout<<"\n-------Operasi Stack--------"<<endl;
    cout<<"[1] PUSH "<<endl;
    cout<<"[2] POP "<<endl;
    cout<<"[3] CETAK "<<endl;
    cout<<"[4] CLEAR "<<endl;
    cout<<"[5] KELUAR "<<endl;
}

int main() {
    int pilih, angka;

  
    do{
        system("cls");
        menu();
        cout<<"\nPilih Menu : ";
        cin>>pilih;

        switch (pilih)
        {
        case 1:
            cout<<"Masukkan Data : "; 
            cin>>angka;

            insert = new node;
            insert->data = angka;
            insert->next = NULL;

            tail = head;
            if(head == NULL){
                head = insert;
            } else{
                while(tail->next != NULL){
                    tail = tail->next;
                }
                tail->next = insert;
            }
            system("pause");
            break;
        
        case 2:
            if(head!=NULL){
                tail = head;
                if(head->next == NULL){
                    cout<<"data : "<<head->data<<" telah dihapus "<<endl; //cara 1
                    // hapus = head;
                    // delete hapus;//kalo head di pake lagi, jangan hapus head karna kalo di delete berarti head akan hilang, set saja head ke NULL maka bisa di pake lagi
                    head = NULL;
                }else{
                    while(tail->next->next != NULL){
                        tail=tail->next;
                    }
                    cout<<"data : "<<tail->next->data<<" telah dihapus "<<endl; //cara 1
                    hapus = tail->next;
                    cout<<"data : "<<hapus->data<<" telah dihapus "<<endl; //cara 2
                    tail->next = NULL;
                    delete hapus;
                }
            }else{
                cout<<"Stack Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 3:
            cout<<"Isi Stack : ";
            if(head != NULL){
                bantu = head;
                while(bantu!=NULL){
                    cout<<bantu->data<<" ";
                    bantu = bantu->next;
                }cout<<endl;
            }else{
                cout<<"Stack Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 4:
            if(head!=NULL){
                while(head!=NULL){
                    hapus = head;
                    head=head->next;
                    hapus->next=NULL;
                    delete hapus;
                }
                cout<<"stack telah dikosongkan"<<endl;
            }else{
                cout<<"Stack Kosong ! "<<endl;
            }
            system("pause");
            break;
        case 5:
            cout<<"Anda Keluar dari program ! "<<endl;
            break;
        default:
            cout<<"Masukkan pilihan yang tersedia !"<<endl;
            system("pause");
            //gak pake break juga bisa karna sudah yang paling akhir
        }
    }while(pilih != 5);


    
    while(head!=NULL){
        hapus = head;
        head=head->next;
        hapus->next=NULL;
        delete hapus;
    }
    cin.get();
    return 0;
}