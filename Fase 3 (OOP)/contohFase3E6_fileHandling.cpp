#include <iostream>
#include <fstream>
using namespace std;

int main (){

    ofstream cobaFile ("Catatan.txt");

    cobaFile << "Hello rekk!! \n";
    cobaFile << "My name is Hikari, i want to be softwere engginere !! \n";

    cobaFile.close();

    cout << "Berhasil membuat file catatan.txt" << endl;
    return 0;
}