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
void cetak(stack s);
void pop(stack &s, char &hasil);
int main()
{
    char huruf;
    stack s;
    inits(s);
    cout << "Masukkan karakter : ";
    cin >> huruf;
    push(s, huruf);
    cout <<"Masukkan karakter : ";
    cin >> huruf;
    push(s, huruf);
    cout <<"Masukkan karakter : ";
    cin >> huruf;
    push(s, huruf);

    cetak(s);

    pop(s, huruf);
    cout << endl
         <<"Yang dihapus huruf : "<< huruf;

    cetak(s);

    cout <<"\nMasukkan karakter : ";
    cin >> huruf;
    push(s, huruf);
    cout <<"Masukkan karakter : ";
    cin >> huruf;
    push(s, huruf);

    cetak(s);

    pop(s, huruf);
    cout << endl
         <<"Yang dihapus huruf : "<< huruf;
    cetak(s);

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
        cout <<"Stack Penuh !";
}

void cetak(stack s)
{
    int i;
    cout << endl
         <<"Isi Stack : ";
    if (s.top != 0)
    {
        for (i = 1; i <= s.top; i++)
            cout << s.isi[i];
    }
    else
        cout <<"Stack Kosong !";
}

void pop(stack &s, char &hasil)
{
    if (s.top != 0)
    {
        hasil = s.isi[s.top];
        s.top--;
    }
    else
        cout <<"Stack Kosong !";
}