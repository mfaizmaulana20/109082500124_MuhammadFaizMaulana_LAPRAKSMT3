#include <iostream>
#include <string>
using namespace std;

string terbilang(int n) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan",
                       "sepuluh", "sebelas"};

    if (n < 12) return satuan[n];
    if (n < 20) return satuan[n - 10] + " belas";
    if (n < 100) {
        string hasil = satuan[n / 10] + " puluh";
        if (n % 10 != 0) hasil += " " + satuan[n % 10];
        return hasil;
    }
    return "seratus";
}

int main() {
    int n;
    cout << "Masukkan angka (0-100): ";
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Angka harus antara 0 sampai 100" << endl;
    } else {
        cout << n << " : " << terbilang(n) << endl;
    }
    return 0;
}