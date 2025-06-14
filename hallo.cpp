#include <iostream>
#include <string>
using namespace std;

int main() {
    // Inisialisasi array string untuk 5 nama
    string nama[5];

    // Memasukkan 5 nama
    nama[0] = "Andi";
    nama[1] = "Budi";
    nama[2] = "Citra";
    nama[3] = "Dewi";
    nama[4] = "Eko";

    // Menampilkan isi array
    cout << "Daftar nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}