#include <iostream> // untuk memanggil perkakas agar bisa coding tools seperti cout
using namespace std; // agar kita tidak perlu menambahkan std::[tools] misal std::cout

int main(){

    string namaMahasiswa = "M Hikari Reiziq R";
    int Umur = 20; 
    float IPK = 3.61;
    char golonganDarah = 'A';
    bool statusMahasiswa = true;
    
    
    cout << "====Status Mahasiswa===" << endl;
    cout << "namaMahasiswa : " << namaMahasiswa << endl;
    cout << "Umur: " << Umur << endl;
    cout << "IPK : " << IPK << endl;
    cout << "golonganDarah :" << golonganDarah<< endl;
    cout << "statusMahasiswa : " << statusMahasiswa << endl;
    return 0;
}