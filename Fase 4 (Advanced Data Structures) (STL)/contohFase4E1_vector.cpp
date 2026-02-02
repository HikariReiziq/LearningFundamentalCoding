#include <iostream>
#include <vector>
using namespace std;

int main (){
    //Buat vector dengan tipe string
    vector<string> tasAjaib;

    tasAjaib.push_back("Komputer");
    tasAjaib.push_back("Laptop");
    tasAjaib.push_back("Server");

    cout << "Isi tas pertama: " << tasAjaib[0] << endl;
    cout << "Jumlah barang: " << tasAjaib.size() << endl;
    
    cout << "=== isi tas ===\n";
    if (tasAjaib.size() > 0 ){
        for (int n=0 ; n < tasAjaib.size() ; n++ ){
            cout << tasAjaib[n] << endl;
            
        }
    } else {
        cout << "Barang kosong\n";
    }



    tasAjaib.pop_back();
    cout << "=== isi tas part 2 ===\n";
    if (tasAjaib.size() > 0 ){
        for (int n=0 ; n < tasAjaib.size() ; n++ ){
            cout << tasAjaib[n] << endl;
            
        }
    } else {
        cout << "Barang kosong\n";
    }

    // cout << "Test: " << tasAjaib.size() << endl;
    

}