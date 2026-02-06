#include <iostream>
#include <set>
using namespace std;

int main() {
    // Membuat Set String
    set<string> tamu;

    // 1. Menambah Data (Insert)
    tamu.insert("Zelda");
    tamu.insert("Andi");
    tamu.insert("Budi");
    
    // 2. Coba masukkan Duplikat
    tamu.insert("Andi"); // INI AKAN DIABAIKAN komputer

    // 3. Menampilkan (Pakai iterator/foreach)
    // Perhatikan: Outputnya pasti urut A -> Z
    cout << "Daftar Tamu:\n";
    for (string t : tamu) {
        cout << t << endl;
    }
    // Output: Andi, Budi, Zelda

    // 4. Cek Keberadaan (Sama persis kayak Map)
    if (tamu.count("Budi")) {
        cout << "Budi ada di daftar!" << endl;
    }

    return 0;
}