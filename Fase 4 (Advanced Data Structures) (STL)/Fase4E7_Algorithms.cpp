#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){

    vector<int> leaderboard;
    int skor;
    int no = 1;
    int cari;
    cout << "Masukkan 5 skor: " << endl;
    for ( int n = 0 ; n < 5 ; ++n){
        cin >> skor;
        leaderboard.push_back(skor);
    }
    //Tugas 1 (Sorting): Urutkan skor tersebut dari BESAR ke KECIL.
    sort(leaderboard.begin(), leaderboard.end(), greater<int>());
    cout << "=== LEADERBOARD ===\n";
    for (int l : leaderboard){
        cout << no << ". " << l << endl;
        ++no;
    }
    cout << endl;

    cout << "Cari skor: ";
    cin >> cari;
    auto it = find(leaderboard.begin(), leaderboard.end(), cari);
    if (it != leaderboard.end()){
        cout << "[DITEMUKAN] Ada pemain dengan skor " << cari << " di leaderboard." << endl;
    } else {
        cout << "[TIDAK DITEMUKAN] Tidak ada skor " << cari << "\n";
    }
}