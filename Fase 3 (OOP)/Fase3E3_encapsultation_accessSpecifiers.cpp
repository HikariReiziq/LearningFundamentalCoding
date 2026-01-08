#include <iostream>
#include <string>
using namespace std;

class akunIG{
    private:
    string password;

    public:
    string username;

    akunIG(string u, string p){
        username = u;
        password = p;
    }

    void ubahPassword(string passwordLama, string passwordBaru){
        if (password == passwordLama){
            password = passwordBaru;
            cout << "Password berhasil diganti.\n";
        } else {
            cout << "Gagal! Password lama salah.\n";
        }
    }

    void tampilkanInfo(){
        cout << "Username anda: " << username << endl;
        cout << "Password: ";
        int panjang = password.length();
        
        for (int i = 0; i < panjang; i++){
            cout << "*";
        }

        cout << endl;
    }
};

int main(){
    string username;
    string password;
    string tebakPassword;
    string ubahPassword;

    cout << "===Masukkan username dan password===\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    akunIG akun1(username, password);
    akun1.tampilkanInfo();

    cout << "===Ubah password===\n";
    cout << "Masukkan password lama: ";
    cin >> tebakPassword;
    cout << "Ubah password: ";
    cin >> ubahPassword;
    akun1.ubahPassword(tebakPassword, ubahPassword);

    akun1.tampilkanInfo();

}