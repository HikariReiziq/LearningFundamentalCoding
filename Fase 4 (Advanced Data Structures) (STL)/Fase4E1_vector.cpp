#include <iostream>
#include <vector>
using namespace std;


// (User menambah 3 barang: "Pedang", "Perisai", "Potion")

// === ISI GUDANG ===
// 1. Pedang
// 2. Perisai
// 3. Potion


// Pilih menu: 3 (Hapus)
// Hapus barang nomor berapa?: 2
// [Info] "Perisai" berhasil dibuang dari gudang.

int main (){
    
    int choice;
    vector<string> barang;
    string temp_barang;
    int angkaHapus;
    
    do {
        cout << "=== Manajamen Investasi Barang ===\n";
        cout << "1. Tambah Barang\n";
        cout << "2. Lihat Gudang\n";
        cout << "3. Hapus Barang\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "Masukkan Nama Barang: ";
                cin >> temp_barang;
                barang.push_back(temp_barang);
                cout << "[User menambah index no " << barang.size() << ", barang: " << temp_barang << "]\n" ;
                break;
            case 2:
                cout << "=== ISI GUDANG ===\n";
                if (barang.size() > 0){
                    for (int n=0 ; n < barang.size() ; n++){
                    cout << n+1 << "." << barang[n] << endl;
                    }
                } else {
                    cout << "[Barang kosong]\n\n";
                }
                break;
            case 3:
                cout << "Hapus barang nomor berapa?: ";
                cin >> angkaHapus;
                angkaHapus = angkaHapus - 1;
                if (angkaHapus >= 0 && angkaHapus < barang.size()){ // 2 >= 0 && 2 < 3
                    barang.erase(barang.begin() + angkaHapus); // --> Cara menghapus barang
                } else {
                    cout << "Index Invalid\n";
                }
                break;
            case 4:
                cout << "[Exiting program. Goodbye!]\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 4);
}