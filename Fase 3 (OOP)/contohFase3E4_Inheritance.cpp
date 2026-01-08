#include <iostream>
using namespace std;

class hewan{
    public:
    void makan(){
        cout << "Nyam nyam... sedang makan."<< endl;
    }
};

class kucing: public hewan{
    public:
    void meow(){
        cout << "Meow meow!" << endl;
    }
};

int main(){
    kucing kucingOren;

    kucingOren.meow();
    kucingOren.makan(); //< -- lah bisa 

}