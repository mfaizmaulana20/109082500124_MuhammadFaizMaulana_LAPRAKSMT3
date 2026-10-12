
#include <iostream>
#include "mahasiswa.h"

using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

void inputMahasiswa(Mahasiswa &k) {
    cout << "Masukkan Nama : ";
    getline(cin >> ws, k.nama);

    cout << "Masukkan NIM  : ";
    cin >> k.nim;

    cout << "Nilai UTS     : ";
    cin >> k.uts;

    cout << "Nilai UAS     : ";
    cin >> k.uas;

    cout << "Nilai Tugas   : ";
    cin >> k.tugas;

    k.nilaiAkhir = hitungNilaiAkhir(k.uts, k.uas, k.tugas);
}

void tampilMahasiswa(Mahasiswa k) {
    cout << "Nama        : " << k.nama << endl;
    cout << "NIM         : " << k.nim << endl;
    cout << "Nilai UTS   : " << k.uts << endl;
    cout << "Nilai UAS   : " << k.uas << endl;
    cout << "Nilai Tugas : " << k.tugas << endl;
    cout << "Nilai Akhir : " << k.nilaiAkhir << endl;
    cout << "---------------------------------------------" << endl;
}
