#include <iostream>
using namespace std;

class Printer {
    public :

     //method
    void cetak(string teks){
        cout << "Mencetak: ["<< teks << "] di kertas biasa.\n";
    }
};   

class PrinterLaser : public Printer{
    public : 
    void cetak (string teks){
        cout << "⚡ Laser Jet mencetak: ["<< teks << "] dengan Cepat!\n";
    }

};


class PrinterWarna : public Printer{
    public : 
    void cetak (string teks){
        cout << "🎨 Mencetak berwarna: ["<< teks << "] dengan tinta RGB.\n";
    }

};


int main (){

    PrinterLaser printL;
    PrinterWarna printW;

    string teks;

    cout << "Masukkan teks dokumen: ";
    cin >> teks;
    printL.cetak(teks);
    printW.cetak(teks);

}