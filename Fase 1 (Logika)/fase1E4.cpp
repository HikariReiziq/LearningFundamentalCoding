#include <iostream> // untuk memanggil perkakas agar bisa coding tools seperti cout
using namespace std; // agar kita tidak perlu menambahkan std::[tools] misal std::cout

int main(){

    int umur; 
    int batasUmur =  17;
    bool statusBolehMasuk;
    
    
    cout << "====Bioskop Horror===" << endl;
    cout << "Berapa umur anda: " ;
    cin >> umur;

    statusBolehMasuk = batasUmur <= umur;
    cout << "status : " << statusBolehMasuk;


    return 0;
}