//Aplikasi Manajer Keuangan Pribadi (Finance Tracker)

// === DOMPET PINTAR ===
// Saldo Saat Ini: Rp [Tampilkan Saldo Terbaru di sini]

// 1. Tambah Pemasukan
// 2. Tambah Pengeluaran
// 3. Lihat Riwayat Transaksi nanti readDatabase file tsb
// 4. Urutkan Transaksi (Berdasarkan Nominal) pakai vektor
// 5. Hapus Transaksi Terakhir (Undo) pakai vektor
// 6. Simpan & Keluar v

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class transaction{
    public:
    long long nominal;
    string category;
    string desc;
    string type;
    string baris; //--> Buat cout per baris
    int nomor = 1;

    // constructor
    transaction(){}
    transaction(string t, long long n, string c, string d){
        nominal = n;
        category = c;
        desc = d;
        type = t;
    }
    
    //method
    void history(){
        ifstream readDatabase("database.txt");
        cout << "=== DATA HISTORY ===\n";
        cout << "No.| Jenis | Keterangan | Kategori | Nominal\n";
        while (getline (readDatabase, baris)){
            cout << nomor << ". |" << baris << endl;
            nomor++;
        }
        cout << endl;
        nomor = 1;
    }

    
};


int main (){

    int choice;
    int no = 1; // buat urutan
    long long saldo;

    string temp_type;
    long long temp_nominal;
    string temp_category;
    string temp_desc;

    int undo;
    vector<transaction> tsc;
    
    do {

        saldo = 0;
        for (const auto& t : tsc){
            if (t.type == "INCOME"){
                saldo += t.nominal;
            } else if (t.type == "EXPENSE") {
                saldo -= t.nominal;
            }
        }

        string saldoRupiah = to_string(saldo);
        int n = saldoRupiah.length() - 3;
        while (n > 0) {
        saldoRupiah.insert(n, ".");
        n -= 3;
        }

        cout << "=== Dompet Pintar ===\n";
        cout << "Saldo Saat Ini: Rp. " << saldoRupiah << endl ;
        cout << "1. Tambah Pemasukan\n";
        cout << "2. Tambah Pengeluaran\n";
        cout << "3. Lihat Riwayat Transaksi\n";
        cout << "4. Urutkan Transaksi (Berdasarkan Nominal)\n";
        cout << "5. Hapus Transaksi Terakhir (Undo)\n";
        cout << "6. Read File Database Sebelumnya\n";
        cout << "7. Simpan & Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1: {
                cout << " === INCOME === \n";
                cout << "Input Nominal      : ";
                cin.ignore();
                cin >> temp_nominal;
                cout << "Input Description  : ";
                cin.ignore();
                getline(cin, temp_desc);
                temp_type = "INCOME";
                temp_category = " - ";


                //============ Perubahan Format nominal --> rupiah ================
                string rupiah = to_string(temp_nominal);
                int n = rupiah.length() - 3;
                while (n > 0) {
                    rupiah.insert(n, ".");
                    n -= 3;
                }


                cout << "[+] Berhasil mencatat pemasukan: " << temp_desc << " sebesar " << "Rp. "  << rupiah << endl;

                tsc.push_back(transaction(temp_type, temp_nominal, temp_category, temp_desc)); //ram
                
                break;
            }
            case 2: {
                cout << " === EXPENSE ===\n";
                cout << "Input Nominal      : ";
                cin.ignore();
                cin >> temp_nominal;
                cout << "Input Category  : ";
                cin.ignore();
                getline(cin, temp_category);
                cout << "Input Description  : ";
                getline(cin, temp_desc);

                temp_type = "EXPENSE";
                
                //============ Perubahan Format nominal --> rupiah ================
                string rupiah = to_string(temp_nominal);
                int n = rupiah.length() - 3;
                while (n > 0) {
                    rupiah.insert(n, ".");
                    n -= 3;
                }

                cout << "[-] Berhasil mencatat pengeluaran: " << temp_desc << " sebesar " << "Rp. "  << rupiah << endl;

                tsc.push_back(transaction(temp_type, temp_nominal, temp_category, temp_desc)); //ram

            }
                break;
            case 3:{
                cout << "=== Riwayat Transaksi ===\n";
                if (tsc.empty()){
                    cout << "[Data Kosong]\n";
                } else {
                    int no = 1;
                    cout << "No. | Jenis   | Kategori | Keterangan | Nominal\n";
                    cout << "--------------------------------------------\n"; 
                    for (const auto& t : tsc){
                    cout << no << ". | " << t.type << " | "<< t.category << " | " << t.desc << " | " << t.nominal << endl;
                    no++;
                    }
                }
                cout << endl;
            }

                break;
            case 4:
             {
                sort(tsc.begin(), tsc.end(), [](const transaction& nominal1, const transaction& nominal2){
                    return nominal1.nominal > nominal2.nominal;
                }

                );
                cout << "=== Leaderboard Transaksi ===\n";
                for (const auto& transaction : tsc) {
                cout << no << ". " << transaction.type << "|" << transaction.category << "|" << transaction.desc << " | " << transaction.nominal << endl;
                ++no;
                }
                cout << endl;
                no = 1;
             }
                break;
            case 5:
                cout << "=== Undo ===\n";
                try {
                if (tsc.size() == 0){
                    throw "Tidak ada aksi untuk di-undo! (Program tidak crash)";
                }
                undo = tsc.size() - 1;
                cout << "[UNDO] Membatalkan transaksi: "<< tsc[undo].desc << ".\n";
                tsc.pop_back();                 
            }
            catch (const char* msg){
                cout << "[Warning] " << msg << endl;
            }
                break;

            case 6:{
                transaction newTsc;
                newTsc.history();  
            } 
            break;

            case 7:{
            
            ofstream updateDatabase("database.txt", ios::app);

            if (updateDatabase.is_open()){
                for (const auto& t : tsc){
                    updateDatabase << t.type << "|" << t.desc << "|" << t.category << "|" << t.nominal << endl;
                    cout << "[Info] Data berhasil diperbarui (termasuk Undo).\n";
                } 
                updateDatabase.close();

            } else {
                cout << "[Error] Gagal membuka file untuk disimpan.\n";
            }
                cout << "[Exiting program. Goodbye!]\n";            
            }
                break;

                default:
                cout << "Invalid option!\n";
                
        }
    } while (choice != 7);  
    
}


