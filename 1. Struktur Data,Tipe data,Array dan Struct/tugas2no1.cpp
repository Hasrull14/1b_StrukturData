#include <iostream>
using namespace std;

int main()
{
    // ----Pengisian Data----

    // data tunggal
    int usia = 20;
    float bobot = 81.5;
    bool status_kerja = false;
    char gender = 'l';

    // array
    string siswa[] = {"adi", "andi", "sudi", "budi", "mondi"};

    // struct
    struct kelas
    {
        int kursi, meja, projektor, siswa;
        string nama_kelas;
    };
    kelas sib;
    sib.nama_kelas = "1B";
    sib.kursi = 40;
    sib.meja = 30;
    sib.projektor = 1;
    sib.siswa = 40;

    // ----menampilkan data----

    // data tunggal
    cout << "---Data Tunggal---" << endl;
    cout << "usia = " << usia << endl;
    cout << "bobot = " << bobot << endl;
    cout << "status kerja = " << status_kerja << endl;
    cout << "gender = " << gender << endl;

    // array
    cout << "---Array---" << endl;
    int length = sizeof(siswa) / sizeof(siswa[0]);
    for (int i = 0; i < length; i++)
    {
        cout << "No. Absen - " << i + 1 << " = " << siswa[i] << endl;
    }

    // struct
    cout << "---Struct---" << endl;
    cout << "nama kelas = " << sib.nama_kelas << endl;
    cout << "jumlah kursi = " << sib.kursi << endl;
    cout << "jumlah meja = " << sib.meja << endl;
    cout << "jumlah projektor = " << sib.projektor << endl;
    cout << "jumlah siswa = " << sib.siswa << endl;

    cin.get();
    return 0;
}