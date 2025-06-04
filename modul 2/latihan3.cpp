#include <iostream>
using namespace std;

int main(){
    int mat[3][4] = {{ 10,20,30,40 },{11,22,33,44},{12,23,34,45}};

    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}