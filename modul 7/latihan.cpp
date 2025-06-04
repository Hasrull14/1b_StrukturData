#include <iostream>
using namespace std;

#define maxs 5

struct tampung {
    char queue[maxs];
    short back;
};

void inits (tampung &q){
    q.back = 0;
}

void enqueue (tampung &q, char &data){
    if (q.back < maxs){
        q.queue[q.back] = data;
        q.back++;
    }else{
        cout<<"Queue Penuh ! "<<endl;
    }
}

// void pop (tampung &q){
//     if (q.back-1 >= 0)
//     {
//         q.back = q.back-1;
//         char hasil = q.queue[q.back];
//         cout<<"Karakter "<<hasil<<" telah di hapus dari gudang"<<endl;
//         q.back = q.back+1;
//         q.back--;
//     }
//     else
//         cout << "Stack Kosong !"<<endl;
// }

void pop (tampung &q){
    if (q.back != 0)
    {
        q.back--;
        char hasil = q.queue[q.back];
        cout<<"Karakter "<<hasil<<" telah di hapus dari gudang"<<endl;
    }
    else
        cout << "Stack Kosong !"<<endl;
}

void dequeue (tampung &q){
    if(q.back != 0){
        cout<<"Dequeue antrian pertama : "<<q.queue[0]<<endl;
        for(int i=0;i<q.back-1;i++){
            q.queue[i]=q.queue[i+1];
        }
        q.back--;
    }else{
        cout<<"Queue Kosong ! "<<endl;
    }
}


void cetakQueue(tampung &q){
    if(q.back != 0){
        for(int i=0;i<q.back;i++){
            cout<<q.queue[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"Queue Kosong ! "<<endl;
    }
}


void clear (tampung &q){
    q.back = 0;
    cout<<endl;
}

int main(){
    tampung q;
    inits(q);
    char huruf;
    short pil;

    do {
        system("cls");
        cout<<"==========================================="<<endl
            <<"         PROGRAM QUEUE & STACK V.1         "<<endl
            <<"==========================================="<<endl
            <<"1. ENQUEUE / PUSH"<<endl
            <<"2. POP"<<endl
            <<"3. DEQUEUE"<<endl
            <<"4. CETAK QUEUE"<<endl
            <<"5. CLEAR"<<endl
            <<"6. KELUAR"<<endl;
        cout<<"Masukkan pilihan : ";
        cin>>pil;

        switch (pil)
        {
        case 1:
        {
            cout <<"Masukkan karakter : ";
            cin>>huruf;
            enqueue(q,huruf);
            system("pause");
            break;
        }
        case 2:
        {
            pop(q);
            system("pause");
            break;
        }
        case 3:
        {
            dequeue(q);
            system("pause");
            break;
        }
        case 4:
        {
            cout<<q.back<<endl;
            cetakQueue(q);
            system("pause");
            break;
        }
        case 5:
        {
            clear(q);
            system("pause");
            break;
        }
        case 6:
            cout<<"Keluar dari program ! "<<endl;
            break;
        default:
            cout<<"Masukkan pilihan yang sesuai ! "<<endl;
            system("pause");
        }
    }while(pil != 6);

    system("pause");
    return 0;
}