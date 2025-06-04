#include <iostream>
#include <conio.h>
using namespace std;
int main(){
   int i,j,luas[2][3];
   for(i=0;i<2;i++){
        for(j=0;j<3;j++){
             cout << "Luas [" <<i<<"]["<<j<<"] : ";
             cin >> luas[i][j];
        }
   }
   getch();
   return 0;
}