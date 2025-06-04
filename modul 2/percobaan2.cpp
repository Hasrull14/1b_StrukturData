#include <iostream>
 #include <conio.h>
 using namespace std;
 int main(){ 
    int a[3];
    int i;
    a[0] = 5;
    a[1] = 9;
    a[2] = 11;
    a[3] = 20;
    for(i=0;i<3;i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    }
 getch();
 return 0;
}