#include <iostream>
#include <map>
#include <string>
using namespace std;

int main (){
    
    int choice;
    map<string, string> akun;
    string username;
    string password;

    
    do {
        cout << "=== Login ===\n";
        cout << "1. Daftar Akun\n";
        cout << "2. Login\n";
        cout << "3. Lihat Semua Akun\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "=== Register Page===\n";
                cout << "Masukkan Username: ";
                cin >> username;
                cout << "Masukkan Password: ";
                cin >> password;
                if(akun.find(username) != akun.end()) {
                    cout<<"[ERROR] Username (" << username << ") sudah terpakai! Gagal daftar\n\n";
                } else {
                    akun.insert({username, password});
                    cout<<"[Info] Akun berhasil dibuat.\n\n";
                }
                break;
            case 2:
                cout << "=== Login Page ===\n";
                cout<<"Enter username: "<<endl;
                cin>>username;
                cout<<"Enter password: "<<endl;
                cin>>password;
                // Check if provided username and password matches with the one is dictonary
                if(akun.find(username) != akun.end() && akun[username] == password) {
                    cout<<"[SUCCESS] Login Successfully! Welcome [" << username << "]\n\n";
                } else {
                    cout<<"Invalid Credentials\n\n";
                }
                break;
            case 3:
                cout << " === List Daftar Akun yang sudah terdaftar ===\n";
                for (auto it = akun.begin(); it != akun.end(); ++it){
                cout << it->first << endl;
                }
                cout << endl;
                break;
            case 4:
                cout << "[Exiting program. Goodbye!]\n";
                break;

            default:
            cout << "Invalid option!\n";
            
        }
    } while (choice != 4);
}