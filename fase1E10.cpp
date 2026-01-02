#include <iostream>
using namespace std;
// 80, 95, 70, 85, 60
// Absen indeks ke-0 nilainya: 80


int main(){
    int nilaiSiswa[5] = {80, 95, 70, 85, 60};
    for (int i = 0; i < 5; i ++){
        cout << "Absen indeks ke-" << i << " nilainya: " << nilaiSiswa[i] << endl;
    }
    cout << "selesai disebutkan";

}