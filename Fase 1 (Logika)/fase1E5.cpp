#include <iostream>
using namespace std;

int main() {
    int suhu;
    
    cout << "Masukkan suhu air Anda: ";
    cin >> suhu;

    cout << "===hasil===" << endl;
    // Struktur If-Else
    if (suhu >= 100) {
        cout << "Air mendidih";
    } else if (suhu >= 1) {
        // Blok ini HANYA jalan kalau syarat SALAH
        cout << "Air" ;
    } else {
        cout << "Air Beku / ES";
    }

    return 0;
}