#include <iostream>
#include <set> 
using namespace std;

int main() {
    // Membuat Set String
    set<string> kata;
    string temp_kata;
    cout << "Masukkan kata (ketik STOP untuk selesai):\n";
    cin >> temp_kata;
    while (temp_kata != "STOP")
    {   
        kata.insert(temp_kata);
        cin >> temp_kata;

    }



    cout << "=== KATA-KATA UNIK (Urut Abjad) ===\n";
    for (string k : kata) {
        cout << k << endl;
    }

    return 0;
}