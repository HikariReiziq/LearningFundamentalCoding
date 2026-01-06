#include <iostream>
#include <string>
using namespace std;

class robot {
    public:
    string nama;
    int baterai;

    void casBaterai(){
        if (baterai <= 80){
            baterai = baterai + 20;
            cout << "Bertambah 20% --> Menjadi: " << baterai << endl;
        } else {
            cout << "Baterai sudah penuh 100%" << endl;
        }
    }

    void bekerja(){
        if (baterai < 30){
            cout << "Baterai lemah! Harap cas dulu.\n";
        } else {
            baterai = baterai - 30;
            cout << "Robot " << nama << " selesai bekerja. Sisa baterai: "<< baterai << endl;
        }
    }

};

int main (){
    robot robot1;
    robot1.nama = "ironman";
    robot1.baterai = 40;

    robot1.bekerja();
    robot1.bekerja();
    robot1.casBaterai();
    robot1.casBaterai();
    robot1.casBaterai();
    robot1.casBaterai();
    robot1.casBaterai();

    return 0;
}