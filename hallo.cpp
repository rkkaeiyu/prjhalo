#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;

    // Input jumlah nama yang ingin diproses
    cout << "Masukkan jumlah nama: ";
    cin >> jumlah;

    // Validasi batas array (maks 100 nama)
    if (jumlah > 100) {
        cout << "Maksimum nama yang dapat dimasukkan adalah 100.\n";
        return 1;
    }

    string nama[100]; // Menggunakan array besar agar fleksibel

    // Input nama-nama
    for (int i = 0; i < jumlah; i++) {
        cout << "Nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    // Menampilkan isi array
    cout << "\nDaftar nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}