#include <iostream>
#include <string>
using namespace std;

class player {
    public:
    string nickname;
    int hp;
    int level;

    player(string n, int darahAwal){
        nickname = n;
        level = 1;
        hp = darahAwal;
        if (hp < 10){
            hp = 10;
            cout << "darah player [" << nickname <<  "] terlalu sekarat\n";
        } else if (hp > 100){
            hp = 100;
            cout << "darah player [" << nickname <<  "] terlalu banyak\n";

        }
    }

    void diserang(int damage){
        hp = hp - damage;
        if (hp <= 0){
            cout << "game over. " << nickname << " kalah.\n";
        }
        else {
            cout << "darah player [" << nickname <<  "] berkurang, sisa HP: " << hp << endl; 
        }
    }

};

int main (){

    player player1("cheater", 500);
    player player2("Noob", 8);

    player1.diserang(10);
    player2.diserang(3);
    player1.diserang(30);
    player1.diserang(20);
    player2.diserang(10);


    return 0;
}