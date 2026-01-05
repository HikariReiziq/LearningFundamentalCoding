#include <iostream>
#include <string>
using namespace std;

struct Produk{
    string nama;
    int harga;
};

// === MENU WARUNG ===
// 1. Roti - Rp 5000
// 2. Susu - Rp 10000

int main(){
    
    Produk barang[2];
    
    barang[0].nama = "roti";
    barang[0].harga = 5000;

    barang[1].nama = "susu";
    barang[1].harga = 10000;
    
    int pilihan;
    int beli;
    int total;
    int bayar;
    int kembalian;
    
    cout << "=== MENU WARUNG ===" << endl;
    for (int i = 0; i < 2; i++){
        cout << i+1 << "." << barang[i].nama << " - Rp " << barang[i].harga << endl;
    };
    
    cout << "Pilih nomor barang: ";
    cin >> pilihan;

    while ( pilihan != 1 && pilihan != 2){
    cout << "Pilih nomor barang kembali: ";
    cin >> pilihan;     
    }

    switch (pilihan){
        case 1:
        
        cout << "Jumlah beli: ";
        cin >> beli;       
        total = barang[0].harga * beli;
        cout << "Total harga: " << total << endl;
        break;
        case 2:

        cout << "Jumlah beli: ";
        cin >> beli;
        total = barang[1].harga * beli;
        cout << "Total harga: " << total << endl;
        break;
        default:
        cout << "Pilihan produk tidak tersedia" << endl;
    }
    
    cout << "Bayar: ";
    cin >> bayar;

    kembalian = bayar - total; 
    
    cout << "Kembalian: " << kembalian << endl << "Terima kasih!" << endl;

    return 0;
}