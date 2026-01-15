#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<string> tasAjaib;

    tasAjaib.push_back("Senter Pengecil");
    tasAjaib.push_back("Baling-baling bambu");
    tasAjaib.push_back("Pintu ajaib");


    cout << "Isi tas pertama: " << tasAjaib[0] << endl;
    cout << "Isi tas kedua: " << tasAjaib[1] << endl;

    
    cout << "Jumlah barang: " << tasAjaib.size() << endl;
    tasAjaib.pop_back();
    cout << "Jumlah barang saat ini setelah dihapus: " << tasAjaib.size() << endl;

    return 0;
}

