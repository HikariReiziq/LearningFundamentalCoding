#include <iostream>
using namespace std;

int main() {
    // 1. Kita bikin variabel (Bangun rumah isi 100)
    int uang = 100;

    // 2. Kita lihat isinya
    cout << "Isi variabel uang: " << uang << endl;

    // 3. Kita lihat ALAMATNYA di memori (Pakai tanda &)
    cout << "Alamat memori uang: " << &uang << endl;

    return 0;
}