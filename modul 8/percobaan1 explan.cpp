#include <iostream>
using namespace std;

// pointer adalah sebuah variabel khusus yang berisi alamat memori. Pointer nantinya akan bisa mengakses data yang ada di suatu alamat memori.
int main()
{
    int data = 5;
    int *pointerku;


    cout << "data        :" << data << endl;
    cout << "alamat data : " << &data << endl;
    cout << "pointerku   : " << pointerku << endl
         << endl; //pointer disini = null

    pointerku = &data; //1. mengisi pointerku dengan alamat variabel data
    cout << "pointerku     : " << pointerku << endl
         << endl;

    *pointerku = 10; //2. merubah data dalam alamat yang ditunjuk pointerku
    cout << "pointerku   : " << pointerku << endl;//1
    cout << "pointerku   : " << *pointerku << endl;//2
    cout << "data           : " << data << endl;

    system("pause");
    return 0;
}

//terdapat 2 variabel pointer di atas, setelah dideclare
//1. pointer = mengakses alamat variabel yang disimpan
//2. *pointer = mengakses nilai variabel pada alamat yang telah disimpan