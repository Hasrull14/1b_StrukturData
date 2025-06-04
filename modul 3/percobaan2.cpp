#include <iostream>
#include <conio.h>
using namespace std;
struct mahasiswa
{
    char nim[11];
    char nama[20];
    char alamat[20];
    int umur;
};
int main()
{
    mahasiswa mhs[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "\nMasukkan data ke-" << i + 1 << endl;
        cout << "NIM :";
        cin >> mhs[i].nim;
        cout << "Nama : ";
        cin >> mhs[i].nama;
        cout << "Alamat : ";
        cin >> mhs[i].alamat;
        cout << "Umur : ";
        cin >> mhs[i].umur;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "\nNIM    : " << mhs[i].nim << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "Alamat : " << mhs[i].alamat << endl;
        cout << "Umur   : " << mhs[i].umur << endl;
    }
    getch();
    return 0;
}
