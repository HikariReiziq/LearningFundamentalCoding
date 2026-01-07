#include <iostream>
#include <string>
using namespace std;

class Kucing {
public:
    string nama;
    int umur;

    // --- INI CONSTRUCTOR ---
    // Jalan otomatis saat: Kucing mpus("Oyen", 2);
    Kucing(string n, int u) {
        nama = n;
        umur = u;
        cout << "Meong! Kucing bernama " << nama << " telah lahir!" << endl;
    }

    void lari() {
        cout << nama << " sedang berlari..." << endl;
    }
};

int main() {
    // Lihat betapa ringkasnya di Main!
    // Tidak perlu .nama = ... lagi. Langsung masukkan di dalam kurung.
    Kucing kucing1("Oyen", 2); 
    Kucing kucing2("Bleki", 1);

    kucing1.lari();
    return 0;
}