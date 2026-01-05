#include <iostream>
using namespace std;
// 5 dan 6
// 5 + 4 + 3 + 2 + 1 = 15
// 3 + 2 + 1 = 6

int tambahTerus(int n){
    if ( n == 1){
        cout << n << " = ";
        return 1;
        
    } else {
        cout << n << " + ";
        return n + tambahTerus(n-1); //3 + 2 + 1 = 6
    }

}

int main (){
    int input;
    cout << "masukkan angka untuk tambah terus: ";
    cin >> input;

    cout << "Hasilnya --> " << tambahTerus(input);
    return 0;
}


