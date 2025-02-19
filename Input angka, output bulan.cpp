#include <iostream>
using namespace std;

void namaBulan();

int main() {
    namaBulan();
    return 0;
}

void namaBulan() {
    int bulan;
    cout << "=== Nama Bulan 1-12 ===";
    cout << "\nMasukkan angka 1-12: ";
    cin >> bulan;
    
    switch (bulan) {
        case 1:
        cout << "\nBulan 1 : Januari";
        break;
        case 2:
        cout << "\nBulan 2 : Februari";
        break;
        case 3:
        cout << "\nBulan 3 : Maret";
        break;
        case 4:
        cout << "\nBulan 4 : April";
        break;
        case 5:
        cout << "\nBulan 5 : Mei";
        break;
        case 6:
         cout << "\nBulan 6 : Juni";
        break;
        case 7:
        cout << "\nBulan 7 : Juli";
        break;
        case 8:
        cout << "\nBulan 8 : Agustus";
        break;
        case 9:
        cout << "\nBulan 9 : September";
        break;
        case 10:
        cout << "\nBulan 10 : Oktober";
        break;
        case 11:
        cout << "\nBulan 11 : November";
        break;
        case 12:
        cout << "\nBulan 12 : Desember";
        break;
        default:
        cout << "Input yang anda masukkan tidak valid!!!";
    }
}