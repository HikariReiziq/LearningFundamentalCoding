#include <iostream>
#include <string>
using namespace std;

// Fungsi 1: Menerima Angka Bulat
void cetak(int angka) {
    cout << "Ini adalah angka bulat: " << angka << endl;
}

// Fungsi 2: Menerima Angka Desimal (Namanya SAMA, tapi parameternya double)
void cetak(double angka) {
    cout << "Ini adalah angka desimal: " << angka << endl;
}

// Fungsi 3: Menerima Teks (Namanya SAMA, parameternya string)
void cetak(string teks) {
    cout << "Ini adalah pesan rahasia: " << teks << endl;
}

int main() {
    cetak(100);       // C++ otomatis panggil Fungsi 1
    cetak(3.14);      // C++ otomatis panggil Fungsi 2
    cetak("Halo!");   // C++ otomatis panggil Fungsi 3

    return 0;
}