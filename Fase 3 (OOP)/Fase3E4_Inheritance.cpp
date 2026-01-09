#include <iostream>
#include <string>
using namespace std;

class Hero{
    public:
    string nama;
    int darah;

    void infoHero(){
        cout << "Nama: "<< nama << "\nDarah: " << darah << endl;
    }
};

class Mage: public Hero{
    public:
    int mana;
    Mage(string n, int d,int m){
        nama = n;
        darah = d;
        mana = m;
    }
    void lemparSihir(){
        cout << "[" << nama << "] melempar bola api! Mana berkurang."<< endl; 
    }
};

int main (){
    string nama;
    int darah;
    int mana;

    cout << "(User menginput data)\n";
    cout << "Nama: ";
    cin >> nama;
    cout << "Darah: ";
    cin >> darah;
    cout << "Mana: ";
    cin >> mana;


    Mage eudora(nama, darah, mana);

    cout << "=== Status Hero ===\n";
    eudora.infoHero();
    eudora.lemparSihir();
}