// Masukkan Angka 1: 10
// Pilih Operator (+ - * /): *
// Masukkan Angka 2: 5
// Hasil: 50

#include <iostream>
using namespace std;

int main(){
    int angka1, angka2, hasil;
    char operators;

    cout << "===calculator===" << endl;
    cout << "Masukkan angka1: ";
    cin >> angka1; 
    cout << "Masukkan Operator (+,-,*,/)";
    cin >> operators;
    cout << "Masukkan angka2: ";
    cin >> angka2; 

    switch (operators){
        case '+':
        hasil = angka1 + angka2;
        cout << "hasil: " << hasil;
        break;
        case '-':
        hasil = angka1 - angka2;
        cout << "hasil: " << hasil;
        break;
        case '*':
        hasil = angka1 * angka2;
        cout << "hasil: " << hasil;
        break;
        case '/':
        hasil = angka1 / angka2;
        cout << "hasil: " << hasil;
        break;
        default:
        cout << "Operator salah" << endl;

    }

    return 0;

}