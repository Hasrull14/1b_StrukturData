#include <iostream>
using namespace std;

int main()
{
	int arr[] = {2, 4, 6, 8, 10, 12, 13, 14};
	int size = sizeof(arr) / sizeof(arr[0]); // menghitung keseluruhan size dibagi dengan 1 size, 32byte/4byte = 8, ada 8 data dalam array
	int no = 0;
	for (int a = 0; a < size; a++)
	{

		if (arr[a] % 2 == 0)
		{

			no++;
			cout << "bilangan genap ke- " << no << " = " << arr[a] << endl;
		}
	}
	return 0;
}