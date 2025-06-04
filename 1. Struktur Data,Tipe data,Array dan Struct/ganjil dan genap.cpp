#include <iostream>
using namespace std;

int main()
{
    int n[] = {3, 1, 4, 5, 6, 8, 2, 9, 12, 7, 20, 22, 34};

    int nlength = sizeof(n) / sizeof(n[0]);

    for (int a = 0; a < nlength; a++)
    {
        if (n[a] % 2 != 0)
        {
            cout << n[a] << " Ganjil" << endl;
        }
        else
        {
            cout << n[a] << " Genap" << endl;
        }
    }
    system("pause");
    return 0;
}