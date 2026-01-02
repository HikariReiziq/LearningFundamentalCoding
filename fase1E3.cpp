#include <iostream>
using namespace std;

int main() {
    
    int panjang;
    int lebar;
    int luas;

    cout << "====Program Arsitek====" << endl;

    cout << "Masukkan panjang tanah: " ;
    cin >> panjang; 

    cout << "Masukkan lebar tanah: " ;
    cin >> lebar; 

    luas = panjang * lebar;

    cout << "-------------------------" << endl;
    cout << "Luasnya adalah: " << luas ;

    return 0;
}