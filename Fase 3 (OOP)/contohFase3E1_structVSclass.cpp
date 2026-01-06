#include <iostream>
#include <string>
using namespace std;

// Ini CLASS (Huruf depan biasanya Kapital)
class Mahasiswa {
    // Access Specifier (Nanti kita bahas detail, pakai public dulu)
  public:
    string nama;
    int energi;

    // --- INI METHOD (Fungsi di dalam Class) ---
    // Mahasiswa bisa memperkenalkan diri sendiri!
    void perkenalan() {
        cout << "Halo, nama saya " << nama << endl;
    }

    // Mahasiswa bisa belajar (mengurangi energi sendiri)
    void belajar() {
        energi = energi - 10;
        cout << nama << " sedang belajar. Energi sisa: " << energi << endl;
    }
};

int main() {
    // Membuat Object (Sama seperti bikin variabel struct)
    Mahasiswa mhs1;
    
    // Isi datanya
    mhs1.nama = "Hikar";
    mhs1.energi = 100;

    // Panggil Method-nya (Suruh dia beraksi)
    // Perhatikan: Kita pakai TITIK (.) untuk menyuruh method bekerja
    mhs1.perkenalan(); // Output: Halo, nama saya Hikar
    mhs1.belajar();    // Output: Hikar sedang belajar...
    
    return 0;
}