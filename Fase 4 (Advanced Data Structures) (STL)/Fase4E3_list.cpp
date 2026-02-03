#include <iostream>
#include <list>
#include <iterator>  

using namespace std;

int main (){
    int choice;
    list<string> playlist;
    string temp_lagu;
    int position;
    int n = 0;
    list<string>::iterator it = playlist.begin();

    do {
        cout << "=== Playlist Manager ===\n";
        cout << "1. Tambah lagu\n";
        cout << "2. Sisipkan lagu\n";
        cout << "3. Hapus lagu\n";
        cout << "4. Lihat playlist\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "(User pilih menu 1) Masukkan judul lagu: ";
                cin.ignore();
                getline(cin, temp_lagu);
                playlist.push_back(temp_lagu);
                cout << "[Sistem menambahkan posisi " << playlist.size() << ", dengan judul lagu: " << temp_lagu << "]\n" ;
                break;
            case 2:
                cout << "(User pilih menu 2) Masukkan judul lagu: ";
                cin.ignore();
                getline(cin, temp_lagu);
                cout << "Masukkan Posisi yang mau disisipkan: ";
                cin >> position;
                if (position <= playlist.size()){
                    position = position - 1;

                    it = playlist.begin();
                    advance(it, position); 

                    playlist.insert(it, temp_lagu);
                } else {
                    cout << "Position tidak valid\n\n";
                }
                break;
            case 3:
                if (playlist.size() > 0){
                    cout << "Masukkan Posisi yang mau dihapus: ";
                    cin >> position;
                    if (position <= playlist.size()){
                        position = position - 1;

                        it = playlist.begin();
                        advance(it, position); 

                        playlist.erase(it);
                        
                    } else {
                    cout << "Position tidak valid\n\n";
                }
                } else {
                    cout << "[Playlist kosong]\n\n";
                }
                break;
            case 4:
                cout << "=== Playlist ===\n";
                if (playlist.size() > 0){
                    for (string l : playlist){
                    cout << n+1 << "." << l << endl;
                    n++;
                    }
                } else {
                    cout << "[Playlist kosong]\n\n";
                }     
                n = 0;           
                break;
            case 5:
                cout << "[Exiting program. Goodbye!]\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 5);   
}