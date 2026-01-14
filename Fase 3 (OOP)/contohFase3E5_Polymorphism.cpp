#include <iostream>
using namespace std;

class hewan {
    public : 
    void bersuara(){
        cout << "Hewan mengeluarkan suara\n";
    }

};

class sapi : public hewan {
    public : 
    void bersuara(){
        cout << "Moooo...\n";
    }
};

class kambing : public hewan {
    public : 
    void bersuara(){
        cout << "Mbekk...\n";
    }
};


int main (){
    sapi sapiJawir;
    kambing kambingHitam;

    sapiJawir.bersuara();
    kambingHitam.bersuara();

}