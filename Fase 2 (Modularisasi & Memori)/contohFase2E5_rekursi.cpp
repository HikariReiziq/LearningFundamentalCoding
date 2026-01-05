#include <iostream>
using namespace std;

int faktorial(int n) {
    // 1. BASE CASE (Rem Darurat)
    // Kalau angka sudah sampai 1, berhenti dan kembalikan nilai 1.
    if (n == 1) {
        return 1;
    } 
    // 2. RECURSIVE STEP (Panggil Diri Sendiri)
    // 5 * faktorial(4) ... dst
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka);
    return 0;
}