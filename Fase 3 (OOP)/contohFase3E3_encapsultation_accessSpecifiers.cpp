#include <iostream>
#include <string>
using namespace std;

class Brankas {
    private:
    int uangEmas;

    public:
    Brankas(int setorAwal){
        uangEmas = setorAwal;
    }

    void tambahEmas(int jumlah){
        if (jumlah > 0){
            uangEmas += jumlah;
            cout << "berhasil nambah emas.\n";
        } else {
            cout << "Error: Tidak bisa nambah angka negatif.\n";
        }
    }

    int cekIsiBrankas(){
        return uangEmas;
    }
};

int main() {
    Brankas b(100);
    // b.uangEmas = 5000;  <-- ERROR! Pasti merah kodingannya. Private gak bisa disentuh.
    
    b.tambahEmas(50);

    cout << "Isi brankas sekarang: " << b.cekIsiBrankas();
    return 0;

}