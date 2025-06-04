#include <iostream>
#include <conio.h>
#define maxs 5
using namespace std;
struct stack
{
    char isi[maxs];
    int top;
};

void inits(stack &s);
void push(stack &s, char data);
void cetak(stack &s);
void pop(stack &s, char &hasil);
int main()
{
    char status;
    char karakter;
    int pilih;
    stack s;
    inits(s);

    do {
        cout << "\nPROGRAM STACK" << endl;
        cout << "=========================" << endl;
        cout << "Nama : Muhammad Hasrul Waliyudin" << endl;
        cout << "NIM  : 2413030096" << endl;
        cout << "-------------------------" << endl;
        cout << "Menu" << endl;
        cout << "[1] Tambah Isi Stack " << endl;
        cout << "[2] Ambil Isi Stack " << endl;
        cout << "[3] Tampilkan Isi Stack " << endl;
        cout << "Pilih Menu : ";
        cin >> pilih;

        switch (pilih) {
        case 1:
            do{
                cout << "Masukkan karakter : ";
                cin >> karakter;
                push(s, karakter);

                cout<<"Tambah lagi? (Y/N) : ";
                cin>>status;

                if(s.top>=maxs){
                    cout<<"Stack sudah Penuh"<<endl;
                }

            }while(status == 'y'&& s.top<maxs);
            break;

        case 2:
            pop(s, karakter);
            cetak(s);
            break;
        case 3:
            cetak(s);
            break;
        case 4:
            cout << "anda keluar dari program" << endl;
            break;
        default:
            cout << "pilihan anda tidak ada, silahkan pilih lagi" << endl;
        }

    } while (pilih != 4);

    getch();
    return 0;
}

void inits(stack &s)
{
    s.top = 0;
}
void push(stack &s, char data)
{
    if (s.top < maxs)
    {
        s.top++;
        s.isi[s.top] = data;
    }
    else
        cout << "Stack Penuh !";
}

void cetak(stack &s)
{
    int i;
    cout << endl
         << "Isi Stack : "<<endl;
    if (s.top != 0)
    {
        for (i = 1; i <= s.top; i++)
            cout <<"["<<i<<"] "<< s.isi[i]<<endl;
    }
    else
        cout << "Stack Kosong !";
}

void pop(stack &s, char &hasil)
{
    if (s.top != 0)
    {
        hasil = s.isi[s.top];
        cout<<"Karakter "<<hasil<<" telah di hapus dari gudang"<<endl;
        s.top--;
    }
    else
        cout << "Stack Kosong !";
}