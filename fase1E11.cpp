#include <iostream>
#include <string>
using namespace std;

struct laptop{
    string merk;
    int harga;
    bool isGaming;
};

int main (){
    laptop laptopSaya;
    cout << "Masukkan merk laptop anda: ";
    cin >> laptopSaya.merk;
    cout << "Masukkan harga laptop anda: ";
    cin >> laptopSaya.harga;
    cout << "Apakah laptop anda gaming? true = 1 dan false = 0: ";
    cin >> laptopSaya.isGaming;
    cout << "====output====" << endl;
    cout << "merk laptop: " << laptopSaya.merk << endl;
    cout << "harga laptop: " << laptopSaya.harga << endl;
    cout << "Status gaming: " << laptopSaya.isGaming << endl;
    
    return 0;
}
// "Asus", 15000000, true