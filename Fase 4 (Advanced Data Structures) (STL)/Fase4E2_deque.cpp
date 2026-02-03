#include <iostream>
#include <deque>

using namespace std;

// Reguler: Masuk antrian lewat belakang (push_back).

// VVIP: Masuk antrian langsung lewat depan (push_front).

int main (){
    
    int choice;
    deque<string> antrian;
    string temp_antrian;
    
    do {
        cout << "=== Manajamen Antrian Tiket Bioskop ===\n";
        cout << "1. Daftar Reguler\n";
        cout << "2. Daftar VVIP\n";
        cout << "3. Panggil Antrian\n";
        cout << "4. Lihat Daftar Antrian\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "(User pilih menu 1) Masukkan nama: ";
                cin >> temp_antrian;
                antrian.push_back(temp_antrian);
                cout << "[Sistem menambah index no " << antrian.size() << ", atas nama: " << temp_antrian << "]\n" ;
                break;
            case 2:
                cout << "(User pilih menu 2 - VVIP) Masukkan nama: ";
                cin >> temp_antrian;
                antrian.push_front(temp_antrian);
                cout << "[Sistem menambah index no " << antrian.size() << ", atas nama: " << temp_antrian << "]\n" ;
                break;
            case 3:
                if (antrian.size() > 0){
                cout << "Memanggil: " << antrian[0] << "... Silakan masuk studio.\n";
                antrian.pop_front();
                } else {
                    cout << "[Antrian kosong]\n\n";
                }
                break;
            case 4:
                cout << "=== Antrian ===\n";
                if (antrian.size() > 0){
                    for (int n=0 ; n < antrian.size() ; n++){
                    cout << n+1 << "." << antrian[n] << endl;
                    }
                } else {
                    cout << "[Antrian kosong]\n\n";
                }                
                break;
            case 5:
                cout << "[Exiting program. Goodbye!]\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 5);
}