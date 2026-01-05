#include <iostream>
using namespace std;

int main(){
    for (int floor = 1; floor <= 15; floor++){
            if (floor == 13){
            continue;
            }
        
            if (floor == 11){
            break;
            }
        cout << "Kita di lantai ke-" << floor << endl;
    }

    cout << "selesai";
    return 0;
    
}