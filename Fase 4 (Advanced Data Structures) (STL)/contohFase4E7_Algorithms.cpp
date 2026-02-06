#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> angka = {50,10,20,30,40};

    sort(angka.begin(), angka.end());

    cout << "setelah disortir: ";
    for (int a : angka){
        cout << a << " ";
    }
    cout << endl;

    int cari = 30;

    auto it = find(angka.begin(), angka.end(), cari);
    if (it != angka.end()){
        cout << "angka " << cari << " Ditemukan! " << endl;
    } else {
        cout << "Angka tidak ditemukan\n";
    }
}