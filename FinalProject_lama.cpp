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

    //constructor
    transaction(){}
    transaction(string t, long long n, string c, string d){
        nominal = n;
        category = c;
        desc = d;
        type = t;
    }

    void income(){
        //ofstream database ("database.txt", ios::app);

        //format pengubah nominal to rupiah
        string rupiah = to_string(nominal);
            int n = rupiah.length() - 3;
            while (n > 0) {
                rupiah.insert(n, ".");
                n -= 3;
            }

        cout << "[+] Berhasil mencatat pemasukan: " << desc << " sebesar " << "Rp. "  << rupiah << endl;
        //database << type << " | " << desc << " | " << category << " | " << nominal << endl;

        cout << "\n[Info] Data berhasil dicatat sementara!\n\n";
        //database.close();
    }

    void expense(){
        //ofstream database ("database.txt", ios::app);

        //format pengubah nominal to rupiah
        string rupiah = to_string(nominal);
            int n = rupiah.length() - 3;
            while (n > 0) {
                rupiah.insert(n, ".");
                n -= 3;
            }

        cout << "[-] Berhasil mencatat pengeluaran: " << desc << " sebesar " << "Rp. "  << rupiah << endl;
        //database << type << " | " << desc << " | " << category << " | " << nominal << endl;

        cout << "\n[Info] Data berhasil dicatat sementara!\n\n";
        //database.close();
    }
    
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

    void sorting(){

    }
    
};


int main (){

    int choice;
    int no = 1;
    string temp_type;
    long long temp_nominal;
    string temp_category;
    string temp_desc;
    int temp_undo;
    vector<transaction> tsc;
    
    do {
        cout << "=== Dompet Pintar ===\n";
        cout << "Saldo Saat Ini: Rp [Tampilkan Saldo Terbaru di sini]\n";
        cout << "1. Tambah Pemasukan\n";
        cout << "2. Tambah Pengeluaran\n";
        cout << "3. Lihat Riwayat Transaksi\n";
        cout << "4. Urutkan Transaksi (Berdasarkan Nominal)\n";
        cout << "5. Hapus Transaksi Terakhir (Undo)\n";
        cout << "6. Simpan & Keluar\n";
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

                transaction newTsc;
                newTsc.type = "INCOME";
                newTsc.nominal =  temp_nominal;
                newTsc.desc =  temp_desc;
                newTsc.category = " - "; //default
                
                newTsc.income(); //masuk ke database
                
                tsc.push_back(newTsc); //ram
                
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

                transaction newTsc;
                newTsc.type = "EXPENSE";
                newTsc.nominal =  temp_nominal;
                newTsc.category = temp_category;
                newTsc.desc =  temp_desc;
                
                newTsc.expense(); //masuk ke database
                tsc.push_back(newTsc); //ram

            }
                break;
            case 3:{
                transaction newTsc;
                newTsc.history();
            }

                break;
            case 4:{
            tsc.clear(); 
            ifstream readDatabase ("database.txt");
                
            string temp_nominal_str;
                
            while(getline(readDatabase, temp_type, '|')){
                getline(readDatabase, temp_desc, '|');
                getline(readDatabase, temp_category, '|');
                getline(readDatabase, temp_nominal_str);
                if (!temp_nominal_str.empty()){
                    temp_nominal = stoll(temp_nominal_str);
                }

                tsc.push_back(transaction(temp_type, temp_nominal, temp_desc, temp_category));
                //tsc.emplace_back(temp_nominal, temp_desc, temp_category); --> cara modern
            }
            


            sort(tsc.begin(), tsc.end(), [](const transaction& nominal1, const transaction& nominal2){
                return nominal1.nominal > nominal2.nominal;
            } 
            
            );
                cout << "=== LEADERBOARD ===\n";
                for (const auto& transaction : tsc) {
                cout << no << ". " << transaction.type << "|" << transaction.category << "|" << transaction.desc << " | " << transaction.nominal << endl;
                ++no;
                }
                cout << endl;
            }
                break;
            case 5:
                cout << "=== Undo ===\n";
                try {
                if (tsc.size() == 0){
                    throw "Tidak ada aksi untuk di-undo! (Program tidak crash)";
                }
                temp_undo = tsc.size() - 1;
                cout << "[UNDO] Membatalkan transaksi: "<< tsc[temp_undo].desc << ".\n";
                tsc.pop_back();                 
            }
            catch (const char* msg){
                cout << "[Warning] " << msg << endl;
            }
                break;
            case 6:{
            cout << "Menyimpan data ke Database....\n";
            ofstream updateDatabase("database.txt");

            if (updateDatabase.is_open()){
                for (const auto& t : tsc){
                    updateDatabase << t.type << "|" << t.desc << "|" << t.category << "|" << t.nominal << endl;
                    updateDatabase.close();
                    cout << "[Info] Data berhasil diperbarui (termasuk Undo).\n";
                } 

            } else {
                cout << "[Error] Gagal membuka file untuk disimpan.\n";
            }
                cout << "[Exiting program. Goodbye!]\n";            
            }
                break;

                default:
                cout << "Invalid option!\n";
                
        }
    } while (choice != 6);  
    
}



            // tsc.clear(); 
            // ifstream readDatabase ("database.txt");
                
            // string temp_nominal_str;
                
            // while(getline(readDatabase, temp_type, '|')){
            //     getline(readDatabase, temp_desc, '|');
            //     getline(readDatabase, temp_category, '|');
            //     getline(readDatabase, temp_nominal_str);
            //     if (!temp_nominal_str.empty()){
            //         temp_nominal = stoll(temp_nominal_str);
            //     }

            //     tsc.push_back(transaction(temp_type, temp_nominal, temp_desc, temp_category));
            //     //tsc.emplace_back(temp_nominal, temp_desc, temp_category); --> cara modern
            // }
            


            // sort(tsc.begin(), tsc.end(), [](const transaction& nominal1, const transaction& nominal2){
            //     return nominal1.nominal > nominal2.nominal;
            // } 
            
            // );
            //     cout << "=== LEADERBOARD ===\n";
            //     for (const auto& transaction : tsc) {
            //     cout << no << ". " << transaction.type << "|" << transaction.category << "|" << transaction.desc << " | " << transaction.nominal << endl;
            //     ++no;
            //     }
            //     cout << endl;