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
    string nim;
    string jurusan;
    string baris;
    string cariNim;
    int nomor = 1;


    void tambahMahasiswa(){
        ofstream database ("mahasiswa.txt", ios::app);
        cout << "Masukkan Nama   :";
        cin >> nama;
        cin.ignore();
        cout << "Masukkan NIM    :";
        cin >> nim;
        cin.ignore();
        cout << "Masukkan Jurusan:";
        getline(cin, jurusan);
        database << "Nama: " << nama << " | " << "NIM: "  << nim << " | " << "Jurusan: " << jurusan << endl;
        cout << "\n[Info] Data berhasil disimpan!\n\n";
        database.close();
    }

    void lihatData(){
        ifstream readDatabase("mahasiswa.txt");
        cout << "=== DATA MAHASISWA ===\n";
        while (getline (readDatabase, baris)){
            cout << nomor << ". " << baris << endl;
            nomor++;
        }
        cout << endl;
        nomor = 1;
    }
    
    void cariData(){
        bool ketemu =  false;
        cout << "Masukkan NIM yang dicari: ";
        cin >> cariNim;
        ifstream readDatabase("mahasiswa.txt");
        while (getline (readDatabase, baris)){
            if (baris.find(cariNim) != string::npos){
                cout << "[DITEMUKAN!]" << endl;
                cout << baris << endl;
                ketemu = true;
            }
        }

        if (ketemu != true){
            cout << "[Data tidak ditemukan]";
        }
        cout << endl;
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
            case 3:
                mhs.cariData();
                break;
            case 4:
                cout << "[Exiting program. Goodbye!]\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 4);
}