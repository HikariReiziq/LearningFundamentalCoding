#include <iostream>
#include <list>
#include <iterator>  //butuh untuk navigasi

using namespace std;

int main(){

    list<string> playlist;
    playlist.push_back("Lagu A");
    playlist.push_back("Lagu B");

    // CARA AKSES (Harus pakai Iterator/Penunjuk)
    // Iterator itu mirip "jari telunjuk"
    list<string>::iterator it = playlist.begin();

    // Mau akses lagu ke-2? Harus "Maju" (advance) manual
    advance(it, 1); // Maju 1 langkah dari awal

    //insert
    playlist.insert(it, "Lagu sisipan");

    for (string l : playlist){
        cout << l << endl;
    }
    cout << playlist.size();
    return 0;
}