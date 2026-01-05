#include <iostream>
using namespace std;

// TIPE 1: Void (Cuma menyapa, tidak menghasilkan angka/data balik)
void sapaPagi() {
    cout << "Selamat Pagi, Programmer!" << endl;
    cout << "Jangan lupa sarapan." << endl;
}

// TIPE 2: Return (Menghitung dan MENGEMBALIKAN hasil)
int hitungLuas(int sisi) {
    int hasil = sisi * sisi;
    return hasil; // Kembalikan nilai 'hasil' ke pemanggilnya
}

int main() {
    // Memanggil Fungsi Void
    sapaPagi();

    int s;
    cout << "Masukkan sisi persegi: ";
    cin >> s;

    // Memanggil Fungsi Return
    // Hasilnya kita tangkap di variabel 'luasPersegi'
    int luasPersegi = hitungLuas(s);

    cout << "Luas persegi adalah: " << luasPersegi << endl;

    return 0;
}