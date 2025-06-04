#include <iostream>
#include <conio.h>
using namespace std;
int main(){
   int i,jml;
   
   cout<<"Jumlah bilangan genap antara 1-100 adalah: ";
   jml = 0;
   for(i=1;i<=100;i++){
    if(i%2==0){
        jml++;
    }
   }
   cout<<jml<<" bilangan";
   getch();
return 0;
}