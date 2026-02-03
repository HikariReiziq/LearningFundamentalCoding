#include <iostream>
#include <deque>

using namespace std;

int main (){
    deque<string> antrian;
    //masuk dari belakang
    antrian.push_back("Budi");
    //masuk dari depan atau prioritas
    antrian.push_front("Sultan");
    antrian.push_front("Evan");
    antrian.push_front("Yazid");



    cout << "Antrian 1: " << antrian[0] << endl; // Sultan
    cout << "Antrian 2: " << antrian[1] << endl; // Budi

    cout << "=== isi antrian ===\n";
    if (antrian.size() > 0 ){
        for (int n=0 ; n < antrian.size() ; n++ ){
            cout << antrian[n] << endl;
            
        }
    } else {
        cout << "Antrian kosong\n";
    }

    antrian.pop_front();


    cout << "=== isi antrian Part 2 ===\n";
    if (antrian.size() > 0 ){
        for (int n=0 ; n < antrian.size() ; n++ ){
            cout << antrian[n] << endl;
            
        }
    } else {
        cout << "Antrian kosong\n";
    }
}