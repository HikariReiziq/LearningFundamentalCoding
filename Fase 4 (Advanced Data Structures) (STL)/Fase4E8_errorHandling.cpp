#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    int a;
    int b;
    int hasil;

    cout << "Masukkan Angka 1: ";
    cin >> a;
    cout << "Masukkan Angka 2: ";
    cin >> b;
    try{
        if (b == 0){
            throw "Tidak bisa membagi dengan Nol!";
        }

        hasil = a / b;
        cout << "Hasil: " << hasil << endl;
    }

    catch (const char* msg){
        cout << "[ERROR] " << msg << endl;
    }

    cout << "Terima kasih.";

}