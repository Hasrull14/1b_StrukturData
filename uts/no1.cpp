#include <iostream> 
using namespace std;

int main() {
    int i,total, jml_ganjil;

    total = 0;
    jml_ganjil = 0;

    for(i=1;i<=100;i++){
        if(i%2!=0){
            total += i;
            jml_ganjil++;
        }
    }

    cout<<"total bilangan ganjil 1 - 100 = "<<total<<endl;
    cout<<"jumlah bilangan ganjil 1 - 100 = "<<jml_ganjil<<endl;;

    system("pause");
    return 0;
}