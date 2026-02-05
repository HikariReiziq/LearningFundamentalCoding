#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, string> kamus;
    kamus["Apple"] = "Apel";
    kamus["Cat"] = "Kucing";

    kamus.insert({"Book", "Buku"});
    
    cout << "Arti apple adalah: " << kamus["Apple"] << endl;
        // Looping Map (Otomatis urut abjad!)
        // 'pair' itu paket sepasang {Key, Value}
        // it->first adalah Key, it->second adalah Value

        for (auto it = kamus.begin(); it != kamus.end(); ++it){
            cout << it->first << " = " << it->second << endl;
        }


//         // VERSI MANUAL (Tanpa auto) 
// for (map<string, string>::iterator it = kamus.begin(); it != kamus.end(); ++it) {
//     ...
// }

    return 0;
}