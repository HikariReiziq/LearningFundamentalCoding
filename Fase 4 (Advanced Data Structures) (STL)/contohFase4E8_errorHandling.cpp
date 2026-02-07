#include <iostream>
#include <stdexcept>
using namespace std;

int main(){

    int umur ;
    cout << "Masukkan umur: ";
    cin >> umur;

    try{
        if (umur < 0){
            throw "Error: Umur tidak boleh negatif!";
        }

        cout << "Umur kamu adalah: " << umur << endl;
    }

    catch (const char* pesanError){
        cout << "[Terjadi kesalahan] " << pesanError << endl;
    }

    cout << "Program tetap lanjut berjalan normal...." << endl;
    return 0;
}