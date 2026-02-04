#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main (){
    
    int choice;
    stack<string> kontainer;
    string temp_kontainer;
    int batasTinggi = 5;
    
    do {
        cout << "=== Manajamen Kontainer ===\n";
        cout << "1. Input nama barang\n";
        cout << "2. Ambil Kontainer\n";
        cout << "3. Lihat Kontainer Puncak\n";
        cout << "4. Cek Info\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "(User pilih menu 1)\n";
                cout << "Masukkan nama barang: ";
                cin >> temp_kontainer;
                if (kontainer.size() < batasTinggi ){
                    kontainer.push(temp_kontainer);
                    cout << "[User menumpuk " << kontainer.size() << " kali: ";
                    stack<string> salinanKontainer = kontainer;
                    while (!salinanKontainer.empty()){
                        cout << salinanKontainer.top();
                        salinanKontainer.pop();
                        if (!salinanKontainer.empty()){
                            cout << ", ";
                        }
                    }
                    cout << "." << endl;
                } else {
                    cout << "[ERROR] Tumpukan Penuh! Bahaya Roboh! Kontainer " << temp_kontainer << " ditolak.\n\n";
                }
                break;
            case 2:
                cout << "(User pilih menu 2)\n";
                if (kontainer.size() <= batasTinggi && kontainer.size() > 0){
                    cout << "Mengambil kontainer: " << kontainer.top() << endl;
                    kontainer.pop();
                } else {
                    cout << "Kontainer Kosong, tidak ada yang bisa diambil.\n";
                }
                break;
            case 3:
                if (kontainer.size() <= batasTinggi && kontainer.size() > 0){
                    cout << "kontainer Puncak Sekarang: " << kontainer.top() << endl;
                } else {
                    cout << "[Kontainer Puncak kosong]\n\n";
                }
                break;
            case 4:
                cout << "Jumlah Kontainer saat ini: " << kontainer.size() << " dari 5" << endl;
                break;
            case 5:
                cout << "[Exiting program. Goodbye!]\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 5);
}