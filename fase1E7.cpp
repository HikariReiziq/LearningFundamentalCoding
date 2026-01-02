#include <iostream>
using namespace std;


int main(){
    int pinBenar = 1234;
    int pinMasukkan;

    cout << "Masukkan pin ATM: ";
    cin >> pinMasukkan;

    while (pinMasukkan != pinBenar){
        cout << "pin anda salah coba kembali" << endl;
        cout << "Masukkan pin ATM: ";
        cin >> pinMasukkan;
    }

    cout << "pin benar";
    return 0;

}