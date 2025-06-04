#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Struktur untuk menyimpan data barang
struct Barang {
    string nama;
    int jumlah;
    int harga;
    int subtotal() const { return jumlah * harga; }
};

int main() {
    vector<Barang> daftarBarang;
    char lanjut;
    int total = 0;
    int no=1;

    do {
        Barang b;
        cout << "\nMasukkan data barang ke-" <<no<< endl;
        no++;
        cout << "Nama Barang : ";
        cin.ignore();
        getline(cin, b.nama);
        cout << "Jumlah      : ";
        cin >> b.jumlah;
        cout << "Harga Satuan: ";
        cin >> b.harga;

        daftarBarang.push_back(b);
        total += b.subtotal();

        cout << "Ingin memasukkan lagi? (Y/N): ";
        cin >> lanjut;
    } while (lanjut == 'Y' || lanjut == 'y');

    // Menampilkan data barang
    cout << "\nNama Barang | Jml | Harga  | Subtotal" << endl;
    cout << "=================================" << endl;
    for (const auto& b : daftarBarang) {
        cout << left << setw(12) << b.nama << " | "
             << setw(3) << b.jumlah << " | "
             << setw(6) << b.harga << " | "
             << setw(6) << b.subtotal() << endl;
    }
    cout << "---------------------------------" << endl;
    cout << "TOTAL            " << total << endl;
    
    system("pause");
    return 0;
}
