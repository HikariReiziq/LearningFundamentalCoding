#include <iostream>
#include <string>
using namespace std;


// "Terlalu Besar" atau "Terlalu Kecil"
void hint (int tebakan, int jawaban){
    if (tebakan < jawaban){
        cout << "[Sistem]: Terlalu Kecil!\n\n";
    } else if (tebakan > jawaban){
        cout << "[Sistem]: Terlalu Besar!\n\n";
    }
}

int kurangiNyawa(int* n){
    return --*n;
}


int main (){
    
    int bom = 45;
    int nyawa = 5;
    int kode;

    
    cout << "=== BOMB DEFUSAL SQUAD ===\n";
    cout << "Nyawa tersisa: " << nyawa << endl;
    cout << "Masukkan kode: ";
    cin >> kode;
    hint(kode, bom);
    kurangiNyawa(&nyawa);

    while (kode != bom && nyawa > 0){
        cout << "Nyawa tersisa [di while]: " << nyawa << endl;
        cout << "Masukkan kode [di while]: ";
        cin >> kode;
        hint(kode, bom);
        kurangiNyawa(&nyawa);

    };

    if (kode == bom){
        cout << "KODE DITERIMA. Bom berhasil dijinakkan!";
    } else {
        cout << "Nyawa habis. DUARRR! Bom Meledak!" << endl;
        cout << "Kode sebenarnya: " << bom;
    }
    return 0;
}