#include <iostream>
using namespace std;

int main() {
    int angka = 10;
    
    // 1. Membuat Pointer (Pakai bintang *)
    // Bacanya: "ptrAngka adalah pointer yang akan menunjuk ke int"
    int* ptrAngka; 

    // 2. Pairing (Hubungkan pointer ke alamat variabel)
    ptrAngka = &angka; 

    cout << "Nilai awal angka: " << angka << endl;

    // 3. DEREFERENCE (Mengubah nilai ASLI lewat pointer)
    // Pakai bintang * di depan nama pointer untuk "mengakses" isinya.
    *ptrAngka = 200; 

    cout << "Nilai angka setelah diubah pointer: " << angka << endl;
    cout << "Alamat variabel angka: " << &angka << endl;
    cout << "Nilai ptrAngka: " << ptrAngka << endl;
    // Lihat! Kita tidak menyentuh variabel 'angka', tapi nilainya berubah.

    return 0;
}