#include <iostream>
#include <fstream>
using namespace std;

// Siapa nama anda: Hikar
// Tulis quote hari ini: Belajar C++ butuh kesabaran.
int main (){
    ofstream diary ("diary.txt");
    
    string nama;
    string quote;
    string cetak;
    
    cout << "Siapa nama anda: ";
    cin >> nama;
    cin.ignore();
    cout << "Tulis quote hari ini: ";
    getline(cin, quote);
    diary << nama << endl;
    diary << quote << endl;
    
    cout << "[Sistem] Data sedang disimpan ke diary.txt...\n";
    
    cout << "[Sistem] Membaca isi file diary.txt...\n";
    diary.close();
    
    ifstream MyReadFile("diary.txt");
    cout << "--- ISI DIARY ---\n";
    while (getline (MyReadFile, cetak)){
        cout << cetak << endl;
    }
}