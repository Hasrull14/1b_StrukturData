#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

   int i, n, bil, pilih, edit;
   int found = 0;
   edit = 0;
   cout << "masukkan panjang nilai : ";
   cin >> n;
   int nilai[n];

   do
   {
      if (edit == 0)
      {
         cout << "[1] Input Nilai\n";
      }
      else
      {
         cout << "[1] Edit Nilai\n";
      }
      cout << "[2] Cari Nilai\n";
      cout << "[3] Tampilkan Data\n";
      cout << "[4] Keluar Dari Program\n";
      cout << "pilih Menu : ";
      cin >> pilih;

      switch (pilih)
      {
      case 1:
         for (i = 0; i < n; i++)
         {
            cout << "masukkan angka ke-" << i + 1 << " : ";
            cin >> nilai[i];
         }
         edit = 1;
         break;
      case 2:
         cout << "masukkan bilangan yang ingin di cari : ";
         cin >> bil;
         // pencarian
         i = 0;
         do
         {
            if (nilai[i] == bil)
            {
               found = 1;
            }
            i++;
         } while (found == 0 && i < n);

         if (found == 1)
         {
            cout << "Bilangan " << bil << " Ditemukan di indeks ke-" << i - 1 << endl;
         }
         else
         {
            cout << "Bilangan " << bil << " Tidak Ditemukan"<<endl;
         }
         break;
      case 3:
         cout << "---menampilkan data---" << endl;
         // menampilkan data array
         for (i = 0; i < n; i++)
         {
            cout << nilai[i] << " ";
         }
         cout << endl;
         break;
      case 4:
         cout << "anda keluar dari program" << endl;
         break;
      default:
         cout << "pilhan anda tidak ada" << endl;
      }
   } while (pilih != 4);

   getch();
   return 0;
}
