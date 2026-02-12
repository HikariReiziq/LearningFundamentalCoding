#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    // stack buat undo dan tambah tugas? stack juga bisa lihat semua tugas, 
    // algorithm buat cari tugas
    // stdexcept kalau undo ngawur yg padahal kosong
    // kata gemini pakai vector??? 

    vector<string> task;
    string temp_task;
    string search;
    int temp_undo;
    
    int choice;
    
    do {
        cout << "=== Task Manager ===\n";
        cout << "1. Tambah Tugas\n";
        cout << "2. Undo\n";
        cout << "3. Cari Tugas\n";
        cout << "4. Lihat Semua Tugas\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
            cout << "Input your task: ";
            cin.ignore();
            getline(cin,temp_task);
            task.push_back(temp_task);
            cout << "[User menambah index no " << task.size() << ", barang: " << temp_task << "]\n" ;
            break;
            case 2:
            cout << "=== Undo ===\n";
            try {
                if (task.size() == 0){
                    throw "Tidak ada aksi untuk di-undo! (Program tidak crash)";
                }
                temp_undo = task.size() - 1;
                cout << "[UNDO] Membatalkan tugas "<< task[temp_undo] << ".\n";
                task.pop_back();                 
            }
            catch (const char* msg){
                cout << "[Warning] " << msg << endl;
            }
            break;
            case 3:
            cout << "Search your task: ";
            cin.ignore();
            getline(cin, search);
            {
                auto it = find(task.begin(), task.end(), search);  
                
                if (it != task.end()){
                    int index = distance(task.begin(), it) +1;
                    cout << "[DITEMUKAN] Tugas " << search << " ada di urutan ke-"<< index << endl;
                } else {
                    cout << "[TIDAK DITEMUKAN] Tidak ada daftar " << search << "\n";
                }
            }   
            break;
            case 4:
            cout << "=== List Task ===\n";
            if (task.size() > 0){
                for (int n=0 ; n < task.size() ; n++){
                    cout << n+1 << "." << task[n] << endl;
                }
            } else {
                cout << "[No Task]\n\n";
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