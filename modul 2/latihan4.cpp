#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, k, matrix_a[2][2], matrix_b[2][2], hasil[2][2];
    // input data matriks pertama
    cout << "matriks pertama" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "[" << i << "] [" << j << "] :";
            cin >> matrix_a[i][j];
        }
    }

    // input data matriks kedua
    cout << "matriks kedua" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "[" << i << "] [" << j << "] :";
            cin >> matrix_b[i][j];
        }
    }

    // tampilan
    cout << "Matriks Pertama" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "[" << matrix_a[i][j] << "]";
        }
        cout << endl;
    }

    cout << "Matriks Kedua" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "[" << matrix_b[i][j] << "]";
        }
        cout << endl;
    }

    //penjumlahan matriks
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            hasil[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    cout << "Hasil Penjumlahan Matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "[" << hasil[i][j] << "]";
        }
        cout << endl;
    }

     //perkalian matriks
     for (i = 0; i < 2; i++)
     {
         for (j = 0; j < 2; j++)
         {
             hasil[i][j] = (matrix_a[i][0] * matrix_b[0][j])+(matrix_a[i][1]*matrix_b[1][j]);
         }
     }

    cout << "Hasil Perkalian Matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "[" << hasil[i][j] << "]";
        }
        cout << endl;
    }

    getch();
    return 0;
}