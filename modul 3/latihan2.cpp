#include <iostream>
using namespace std;

int main()
{

    struct biodata
    {
        char nip[20];
        string nama, departemen;
        string alamat[3];
    };

    int n;
    cout << "Masukkan jumlah pegawai : ";
    cin >> n;
    biodata pegawai_pos[n];

    // input
    cout << "\nMasukkan pegawai_pos" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Input Data ke-" << i + 1 << endl;
        int j = 0;
        cout << "nip :";
        cin >> pegawai_pos[i].nip;

        cout << "nama :";
        cin.ignore(); // Gunakan cin.ignore() hanya satu kali sebelum getline().
        getline(cin, pegawai_pos[i].nama);

        cout << "departemen :";
        getline(cin, pegawai_pos[i].departemen);

        cout << "alamat" << endl;
        cout << "jalan : ";
        cin >> pegawai_pos[i].alamat[j];
        cout << "kota : ";
        cin >> pegawai_pos[i].alamat[j + 1];
        cout << "kode pos : ";
        cin >> pegawai_pos[i].alamat[j + 2];
    }

    // output
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        cout << "\nData ke-" << i + 1 << endl;
        cout << "NIP : " << pegawai_pos[i].nip << endl;
        cout << "nama :" << pegawai_pos[i].nama << endl;
        cout << "departemen : " << pegawai_pos[i].departemen << endl;
        cout << "alamat" << endl;
        cout << "jalan : " << pegawai_pos[i].alamat[j] << endl;
        cout << "kota : " << pegawai_pos[i].alamat[j + 1] << endl;
        cout << "kode pos : " << pegawai_pos[i].alamat[j + 2] << endl;
    }

    system("pause");
    return 0;
}