#include <iostream>
using namespace std;

int main (){

    int saldo;
    cout << "Masukkan saldo awal: ";
    cin >> saldo;

    while (saldo < 0){
        cout << " Input tidak valid!" << endl;
        cout << "Masukkan saldo awal kembali (Positif): ";
        cin >> saldo;
    }

    cout << " === Hacked Started === \n";
    cout << "Saldo awal: " << saldo << endl; 
    cout << "Mengakses memori via pointer..." << endl;

    int* hack = &saldo;
    
    *hack = 9999999;
    cout << "Hacking sukses!" << endl;
    cout << "Saldo sekarang: " << saldo;
    return 0;

}
