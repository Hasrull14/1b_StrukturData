#include <iostream>
using namespace std;

// pointer adalah sebuah variabel khusus yang berisi alamat memori. Pointer nantinya akan bisa mengakses data yang ada di suatu alamat memori.
int main()
{

    int absen = 5;
    int *nomor = &absen;

    int *copy = nomor;

    cout<<nomor<<endl;
    cout<<*nomor<<endl<<endl;

    cout<<copy<<endl;
    cout<<*copy<<endl;


    int present = 10;
    copy = &present;
    
    cout<<nomor<<endl;
    cout<<*nomor<<endl<<endl;

    cout<<copy<<endl;
    cout<<*copy<<endl;

    system("pause");
    return 0;
}

