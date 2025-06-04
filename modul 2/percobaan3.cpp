#include <iostream>
#include <conio.h>
using namespace std;
int main(){ 
int a[100];
int i;
int j = 0;
for(i=0;i<100;i++){
    
    a[i] = j;
    j+=2;
}

for(i=0;i<100;i++)
    cout << "a[" << i << "] = " << a[i] << endl;
getch();
return 0;
}