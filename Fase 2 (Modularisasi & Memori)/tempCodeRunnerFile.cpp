#include <iostream>
#include <string>
using namespace std;

int hitungLuas (int sisi){
    int hasil = sisi * sisi; 
    return hasil;
}

int hitungLuas (int panjang, int lebar){
    int hasil = panjang * lebar; 
    return hasil;
}

int main (){
    int sisi;
    int panjang, lebar;
    int hasil;

    cout << "Masukkan sisi untuk hitung persegi: ";
    cin >> sisi;

    
    cout << "Masukkan panjang untuk hitung persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar untuk hitung persegi panjang: ";
    cin >> lebar;
    
    hasil = hitungLuas(sisi);
    cout << "Luas Persegi (Sisi " << sisi << "): " << hasil << endl;
    hasil = hitungLuas(panjang , lebar);
    cout << "Luas Persegi panjang (" << panjang << "x" << lebar <<"): " << hasil << endl;

    return 0;
}
