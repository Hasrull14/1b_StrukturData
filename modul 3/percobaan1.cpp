#include <iostream>
#include <conio.h>
using namespace std;
struct mahasiswa
{
    char nim[11];
    char nama[20];
};
int main()
{
    mahasiswa mhs[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "NIM : ";
        cin >> mhs[i].nim;
        cout << "Nama : ";
        cin >> mhs[i].nama;
    }
    for (i = 0; i < 3; i++)
    {
        cout << "\nNim : " << mhs[i].nim << endl;
        cout << "Nama : " << mhs[i].nama << endl;
    }
    getch();
    return 0;
}