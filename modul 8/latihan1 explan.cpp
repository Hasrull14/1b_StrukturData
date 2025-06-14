#include <iostream> 
#include <conio.h>
using namespace std;

struct node
{
    int data;
    int data2;
    node *next; //menyimpan alamat baru dari node selanjutnya
    //5 (aaaa)[data] 9(kkkk)[data2]   | bbbb[next], 
    //10 (bbbb)[data] 11(dddd)[data2] | bbcc[next], 
    //20 (bbcc)[data] 21(ddaa)[data2] | aacc[next], 
    //40 (aacc)[data] 41(sskk[data2]  | NULL[next]

    //alamat struct node *next di ambil dari alamat field struct yang paling atas yaitu int data, jadi alamat struct node *next == &int data
};

node *head, *temp, *insert;
int x;

//fungsi untuk menampilkan data linked list
void tampil(){
    node *bantu;
    bantu = head; //inisialisasi bantu berisi alamat head, dan bantu dapat mengakses field field yang ada pada head, melalui alamat tesebut
    //kenapa gak pake head langsung? posisi head bisa tergeser dan hilang rujukan ke awal list jika tidak hati hati
    //dengan pointer bantu, kita tetap menjaga head tetap menunjuk ke awal linked list
    while(bantu != NULL){
        cout<<bantu->data<<" ";
            cout<<bantu->data2<<" ";
   
        bantu=bantu->next;
    }
    cout<<endl; 
}
//new node membuat objek baru dari struct node
int main() {
    //pengisian single linked list secara manual
    //ilustrasi alamat nya sbg contoh
    head = new node; //bbbb
    cout<<head<<endl; 

    head->data=10; //bbbb
    cout<<&head->data<<endl; 
    head->data2=11; //dddd
    cout<<&head->data2<<endl; 
    head->next = new node; //bbcc
    cout<<head->next<<endl;

    head->next->data = 20; //bbcc
    cout<<&head->next->data<<endl;
    head->next->data2 =21; //ddaa
    cout<<&head->next->data2<<endl;
    head->next->next = new node; //aacc
    cout<<head->next->next<<endl;

    head->next->next->data = 40; //aacc
    cout<<&head->next->next->data<<endl;
    head->next->next->data2 = 41; //sskk
    cout<<&head->next->next->data2<<endl;
    head->next->next->next = NULL; //0
    cout<<head->next->next->next<<endl;

    cout<<"Data awal : ";
    tampil();

    
    //insert di awal node
    insert = new node; //aaaa
    insert->data = 5; //aaaa
    insert->data2 = 9; //kkkk
    insert->next = head; //insert->next = bbbb //insert->next nya lanjut ke alamat head yang ada di kode atas
    cout<<head<<endl;
    head = insert; //head = aaaa //alamat head = alamat insert, alamat insert ini jadi yang pertama muncul
    cout<<"Data insert di awal : ";
    tampil();

    cout<<insert<<endl; //aaaa

    //insert setelah node tertentu (x)
    x = 10;
    insert = new node; //ssdd
    insert->data=35;
    insert->next=NULL;
    node *after;

    cout<<head<<endl; //aaaa

    after = head; //after jadi mempunyai alamat yang sama dengan head
    while (after->data != x && after->next != NULL){
        after = after->next;
    }

    cout<<&after->data<<endl; //bbbb

    if(after->data == x){
        insert->next=after->next; //bbcc,yang awalnya insert->next = null, diganti ke bbcc(20), jadi next ke bbcc(20)
        cout<<insert->next<<endl;
        after->next = insert; //ssdd, yang harusnya (after->data = 10) after next ke bbcc(20), diganti ke ssdd(35)
        cout<<after->next<<endl;
    }else{
        cout<<"Data tidak ditemukan"<<endl;
    }
    cout<<"Data setelah insert setelah 10 : ";
    tampil();


    //insert sebelum node tertentu
    x = 20;
    insert = new node; //ffgg
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
        //prev->data = 35
        //prev->next = bbcc(20)
        //prev->next->data = 20
        if(prev->next != NULL){
            insert->next = prev->next; //insert->next(null) = prev->next(bbcc(20))
            prev->next = insert ;// prev->next(bbcc(20)) = insert(ffgg)
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

    tail->next = insert; //lalu null diganti dengan insert, supaya next ke node insert
    cout<<"Data insert di akhir : ";
    tampil();




    // delete head;
    // delete insert;

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