#include <iostream>
#include <fstream>
using namespace std;

// Siapa nama anda: Hikar
// Tulis quote hari ini: Belajar C++ butuh kesabaran.
int main (){
    ofstream diary ("diary.txt");
    string nama;
    string quote;
    cout << "Siapa nama anda: ";
    cin >> nama;
    cin.ignore();
    cout << "Tulis quote hari ini: ";
    getline(diary, quote);

    diary.close();
    cout << "[Sistem] Data sedang disimpan ke diary.txt...\n";
    cout << "[Sistem] Membaca isi file diary.txt... {coming soon}\n";

}