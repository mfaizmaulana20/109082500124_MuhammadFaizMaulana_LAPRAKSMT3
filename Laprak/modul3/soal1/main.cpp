
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    Mahasiswa mhs[10];
    int jumlahMhs;

    cout << "Berapa data mahasiswa yang ingin dimasukkan (maksimal 10)? ";
    cin >> jumlahMhs;

    if (jumlahMhs < 1 || jumlahMhs > 10) {
        cout << "Jumlah mahasiswa harus antara 1 sampai 10!" << endl;
        return 0;
    }

    for (int i = 0; i < jumlahMhs; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(mhs[i]);
    }

    cout << "\n=============================================" << endl;
    cout << "             DATA NILAI MAHASISWA            " << endl;
    cout << "=============================================" << endl;

    for (int i = 0; i < jumlahMhs; i++) {
        tampilMahasiswa(mhs[i]);
    }

    return 0;
}
