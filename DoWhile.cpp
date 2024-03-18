#include<iostream>
using namespace std;

int main() {
    char pilihan;

    do {
        cout << "Berangkat Ambil Takjil" << endl;
        cout << "Antri Takjil " << endl;
        cout << "Ambil takjil" << endl;
        cout << "Apakah mau antri kembali ?" << endl;
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
}