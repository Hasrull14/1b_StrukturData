#include <iostream>
using namespace std;

int main()
{
    int data = 5;
    int *pointerku;

    cout << "data        :" << data << endl;
    cout << "alamat data : " << &data << endl;
    cout << "pointerku   : " << pointerku << endl
         << endl; 

    pointerku = &data; 
    cout << "pointerku     : " << pointerku << endl
         << endl;

    *pointerku = 10; 
    cout << "pointerku   : " << pointerku << endl;
    cout << "pointerku   : " << *pointerku << endl;
    cout << "data           : " << data << endl;

    system("pause");
    return 0;
}

