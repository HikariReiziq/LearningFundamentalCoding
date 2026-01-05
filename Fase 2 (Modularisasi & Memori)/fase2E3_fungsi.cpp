#include <iostream>
using namespace std;

void tampilJudul(){
    cout << "=== KONVERTER SUHU ===" << endl;
}

float celciusToFahrenheit(float celcius){

    float hasil = (celcius * 1.8) + 32;
    return hasil;
}

int main(){
    float c;
    tampilJudul();
    cout << "Masukkan suhu celcius anda: ";
    cin >> c;

    float hasil = celciusToFahrenheit(c);
    cout << "Suhu fahrenheit: " << hasil << endl;

    return 0;
}