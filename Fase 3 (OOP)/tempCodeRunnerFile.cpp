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



// === DATA MAHASISWA ===
// 1. Nama: Hikar | NIM: 2024001 | Jurusan: Teknik Informatika
// -------------------------



// Masukkan NIM yang dicari: 2024001

// [DITEMUKAN!]
// Nama   : Hikar
// Jurusan: Teknik Informatika

class Mahasiswa {
    public:
    string nama;
    int nim;
    string jurusan;
    string baris;


    void tambahMahasiswa(){
        ofstream database ("mahasiswa.txt");
        cout << "Masukkan Nama   :";
        cin >> nama;
        cout << "Masukkan NIM    :";
        cin >> nim;
        cin.ignore();
        cout << "Masukkan Jurusan:";
        getline(cin, jurusan);
        cout << "[Info] Data berhasil disimpan!\n";
        database << "1. Nama: " << nama << " | " << "NIM: "  << nim << " | " << "Jurusan: " << jurusan << endl;
        database.close();
    }

    void lihatData(){
        ifstream readDatabase("mahasiswa.txt");
        cout << "=== DATA MAHASISWA ===\n";
        while (getline (readDatabase, baris)){
        cout << baris << endl;
        }
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
                // Mahasiswa mhs(nama, nim, jurusan);
                mhs.tambahMahasiswa();
                break;
            case 2:
                mhs.lihatData();
                break;
            // case 3:
            //     mhs.cariData();
            //     break;
            case 3:
                cout << "Exiting program. Goodbye!\\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 4);
}