#include <iostream>
using namespace std;

#define maxs 5

char queue[maxs];
short back = 0;

int main(){
    char huruf;
    short pil, i;
    
    do {
        system("cls");
        cout<<"==================================="<<endl
            <<"         PROGRAM QUEUE V.1         "<<endl
            <<"1. ENQUEUE"<<endl
            <<"2. DEQUEUE"<<endl
            <<"3. CETAK QUEUE"<<endl
            <<"4. CLEAR"<<endl
            <<"5. KELUAR"<<endl;
        cout<<"Masukkan pilihan : ";
        cin>>pil;

        switch (pil) {
        case 1: {
            if (back < maxs){
                cout <<"Masukkan karakter : ";
                cin>>huruf;
                queue[back] = huruf;
                back++;
            }else{
                cout<<"Queue Penuh ! "<<endl;
            }
            system("pause");
            break;
        }
        case 2: {
            if(back != 0){
                cout<<"Dequeue antrian pertama : "<<queue[0]<<endl;
                for(i=0;i<back-1;i++){
                    queue[i]=queue[i+1];
                }
                back--;
            }else{
                cout<<"Queue Kosong ! "<<endl;
            }
            system("pause");
            break;
        }
        case 3: {
            if(back != 0){
                for(i=0;i<back;i++){
                    cout<<queue[i]<<" ";
                }
                cout<<endl;
            }else{
                cout<<"Queue Kosong ! "<<endl;
            }
            system("pause");
            break;
        }
        case 4: {
            back = 0;
            cout<<endl;
            system("pause");
            break;
        }
        case 5:
            cout<<"Keluar dari program ! "<<endl;
            break;
        default:
            cout<<"Masukkan pilihan yang sesuai ! "<<endl;
            system("pause");
        }
    }while(pil != 5);

    system("pause");
    return 0;
}