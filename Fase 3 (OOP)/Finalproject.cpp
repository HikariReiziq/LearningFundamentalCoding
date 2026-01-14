#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// === MENU KAMPUS ===
// 1. Tambah Mahasiswa
// 2. Lihat Data
// 3. Cari Mahasiswa
// 4. Keluar
// Pilihan: 1

// Masukkan Nama   : Hikar
// Masukkan NIM    : 2024001
// Masukkan Jurusan: Teknik Informatika
// [Info] Data berhasil disimpan!

class Mahasiswa {
    public: 
    string nama;
    int nim;
    string jurusan;

    void tambah(){
        cout << "Masukkan Nama   :";
        cin >> nama;
        cout << "Masukkan NIM    :";
        cin >> nim;
        cout << "Masukkan Jurusan:";
        cin >> jurusan;
    }


};

int main (){

    Mahasiswa mhs;

    int choice;

    do {
        cout << "=== MENU KAMPUS ===\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Lihat Data\n";
        cout << "3. Cari Mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                mhs.tambah();
                break;
            case 2:

            default:
            cout << "Invalid option!\n"
            
        }
    } while (!choice);
}