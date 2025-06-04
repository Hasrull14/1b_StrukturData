#include <iostream> 
using namespace std;
void swap(int &a, int &b); 

int main() {
    int x,y;
    x=10;
    y=20;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    cout<<"setelah ditukar"<<endl;
    swap(x,y);
    cout<<"x = "<<x<<" y = "<<y<<endl;

    cin.get();
    return 0;
}

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}