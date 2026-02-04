#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main(){
    
    stack<string> tumpukanBuku;
    cout << "--- Mulai Menumpuk (LIFO) ---\n";
    tumpukanBuku.push("Harry Potter"); // bawah
    tumpukanBuku.push("Rich dad vs poor dad");
    tumpukanBuku.push("Komik Naruto"); // atas

    cout << "Buku paling atas: " << tumpukanBuku.top() << endl;

    tumpukanBuku.pop();

    cout << "Buku paling atas sekarang: " << tumpukanBuku.top() << endl;
    cout << "Size buku: " << tumpukanBuku.size() << endl;

    if (tumpukanBuku.empty()){
        cout << "tumpukkan habis!\n";
    }

    queue<string> antrian;
    antrian.push("Orang A");
    antrian.push("Orang B");
    antrian.push("Orang C");

    cout << "Orang paling depan:" << antrian.front() << endl;

    cout << "[Orang A selesai bre.]\n";
    antrian.pop();
    cout << "Orang paling depan selanjutnya: " << antrian.front();

    
    return 0;
}

