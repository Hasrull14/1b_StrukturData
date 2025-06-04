#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double a[3];
    a[2] = 55.55;
    a[0] = 11.11;
    a[1] = 33.33;
    cout << "a[0] = " << a[0] << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;
    getch();
    return 0;
}