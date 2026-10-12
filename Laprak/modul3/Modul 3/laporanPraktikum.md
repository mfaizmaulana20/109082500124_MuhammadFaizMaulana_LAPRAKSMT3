# <h1 align="center">Laporan Praktikum Modul 3 - ABSTRACT DATA TYPE</h1>

<p align="center">Muhammad Faiz Maulana - 109082500124</p>

## Dasar Teori
Pada modul ini, kita mempelajari Abstract Data Type (ADT), yaitu konsep untuk mengelola data dan menentukan operasi yang bisa dilakukan pada data tersebut. Dengan menggunakan ADT, program dapat dibuat lebih rapi dan mudah dipahami karena bagian tipe data, fungsi atau prosedur, dan program utama bisa dipisahkan. Dalam bahasa C++, konsep ini bisa diterapkan dengan menggunakan `struct`, fungsi, dan prosedur.

### A. Konsep Abstract Data Type (ADT)

Abstract Data Type (ADT) merupakan konsep yang digunakan untuk mengelompokkan data beserta operasi yang dapat dilakukan terhadap data tersebut. ADT membantu programmer mengatur data dan menentukan cara data tersebut diolah agar program lebih terstruktur.

#### 1. Pengertian ADT

#### 2. Tipe Data dan Operasi pada ADT

#### 3. Macam-Macam Operasi pada ADT

### B. Implementasi ADT

Dalam C++, ADT dapat dibuat menggunakan `struct` untuk menyimpan data serta fungsi dan prosedur untuk mengolah data tersebut. Kode program juga dapat dipisahkan ke beberapa file agar lebih rapi dan mudah dikelola.

#### 1. Penggunaan Struct sebagai Tipe Data

#### 2. Fungsi dan Prosedur untuk Mengolah Data

#### 3. Pemisahan File `.h` dan `.cpp`

### C. Penerapan ADT pada Program

ADT dapat diterapkan dalam program yang mengelola informasi tertentu. Salah satu contohnya adalah ADT mahasiswa yang menyimpan NIM dan nilai, serta memiliki operasi untuk memasukkan data dan menghitung nilai rata-rata.

#### 1. Pembuatan ADT Mahasiswa

#### 2. Memasukkan Data Menggunakan Prosedur

#### 3. Menghitung Nilai Menggunakan Fungsi

### D. Array dan Pointer dalam Penerapan ADT

## Guided

### 1. Program Data buku Menggunakan Konsep ADT Sederhana

```C++
//buku.h
#ifndef BUKU_H
#define BUKU_H
#include <iostream>

using namespace std;

struct buku{
    string judul;
    int halaman;
    string penulis;
};

void editIsi(string judul, int halaman, string penulis, buku &buku);
void tampilkanisiBuku(buku buku);
bool checkPenulis(buku buku);


#endif
```

```C++
//buku.cpp
#include "buku.h"

void editIsi(string judul, int halaman, string penulis, buku &buku)
{
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}

void tampilkanisiBuku(buku buku)
{
    cout << "Judul Buku : " << buku.judul << endl;
    cout << "Halaman Buku : " << buku.halaman << endl;
    cout << "Penulis Buku : " << buku.penulis << endl;
}

bool checkPenulis(buku buku)
{
    return buku.penulis == "";
}
```

```C++
//main.cpp
#include "buku.h"

void editIsi(string judul, int halaman, string penulis, buku &buku)
{
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}

void tampilkanisiBuku(buku buku)
{
    cout << "Judul Buku : " << buku.judul << endl;
    cout << "Halaman Buku : " << buku.halaman << endl;
    cout << "Penulis Buku : " << buku.penulis << endl;
}

bool checkPenulis(buku buku)
{
    return buku.penulis == "";
}
```

File buku.h berisi deklarasi struct buku yang menyimpan judul, jumlah halaman, dan nama penulis, serta deklarasi fungsi untuk mengisi, menampilkan, dan memeriksa data buku. File buku.cpp berisi implementasi fungsi-fungsi tersebut, sedangkan main.cpp berfungsi sebagai program utama yang meminta pengguna memasukkan data buku, menyimpannya ke dalam variabel novel, menampilkan informasi buku, dan memeriksa apakah nama penulis sudah diisi atau masih kosong.


## Unguided

### 1. (Operasi Nilai Akhir Mahasiswa)

```C++
//mahasiswa.h
#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas);
void inputMahasiswa(Mahasiswa &k);
void tampilMahasiswa(Mahasiswa k);

#endif
```

```C++
//mahasiswa.cpp
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
```

```C++
//main.cpp

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

```

### Output Unguided 1 :

##### Output 1

![https://github.com/mfaizmaulana20/109082500124_MuhammadFaizMaulana_LAPRAKSMT3/blob/main/Laprak/modul3/Modul%203/output/soal1a.png)

contoh :
![https://github.com/mfaizmaulana20/109082500124_MuhammadFaizMaulana_LAPRAKSMT3/blob/main/Laprak/modul3/Modul%203/output/soal1b.png)


Program ini menggunakan `struct Mahasiswa` untuk menyimpan informasi mahasiswa dan array yang dapat menampung maksimal 10 data mahasiswa. Fungsi `inputMahasiswa()` digunakan untuk memasukkan data mahasiswa, sedangkan `hitungNilaiAkhir()` berfungsi menghitung nilai akhir sesuai rumus yang ditentukan pada soal. Setelah itu, fungsi `tampilMahasiswa()` digunakan untuk menampilkan data mahasiswa beserta nilai akhirnya.


### 2. (Buatlah ADT pelajaran sebagai berikut di dalam file “pelajaran.h”)

```C++
//pelajaran.h
```
```C++
//pelajaran.cpp
```
//pelajaran.cpp
```C++
//main.cpp
```

### Output Unguided 2 :

##### Output 1


![https://github.com/mfaizmaulana20/109082500124_MuhammadFaizMaulana_LAPRAKSMT3/blob/main/Laprak/modul3/Modul%203/output/soal2.png)


Program ini menggunakan `struct pelajaran` untuk menyimpan nama dan kode mata pelajaran. Fungsi `create_pelajaran()` digunakan untuk mengisi data mata pelajaran, sedangkan prosedur `tampil_pelajaran()` berfungsi menampilkan data yang telah dimasukkan. Program ini juga memisahkan file header dan implementasi agar susunan kode lebih rapi serta sesuai dengan konsep ADT yang dipelajari pada modul.

### 3. (Pertukaran array isi 2d dengan pointer)

```C++
//array.h
```
```C++
//array.cpp
```
```C++
//main.cpp
```

### Output Unguided 3 :

##### Output 1

![https://github.com/mfaizmaulana20/109082500124_MuhammadFaizMaulana_LAPRAKSMT3/blob/main/Laprak/modul3/Modul%203/output/soal3.png)



Program ini menggunakan dua array berukuran 3×3 dan dua pointer bertipe integer. Fungsi `tampilArray()` digunakan untuk menampilkan isi array, sedangkan `tukarArray()` berfungsi menukar elemen pada posisi yang sama, yaitu baris kedua dan kolom kedua dengan indeks `[1][1]`. Sementara itu, fungsi `tukarPointer()` digunakan untuk menukar nilai yang ditunjuk oleh kedua pointer dengan bantuan variabel sementara. Perlu diketahui bahwa indeks array dalam C++ dimulai dari 0, sehingga indeks `[1][1]` menunjukkan baris kedua dan kolom kedua. Pada contoh program, pointer `p1` dan `p2` menunjuk ke variabel `val1` dan `val2` yang nilainya ditukar oleh fungsi tersebut.



## Kesimpulan
Berdasarkan praktikum Modul 3, dapat disimpulkan bahwa ADT merupakan konsep yang membantu menyusun program C++ agar lebih teratur dan mudah dipahami. Dalam praktikum ini, dipelajari penggunaan `struct` untuk menyimpan data, fungsi untuk melakukan perhitungan, serta prosedur untuk memasukkan dan menampilkan data. Selain itu, penggunaan array dan pointer juga dipelajari untuk mengelola data dan melakukan pertukaran nilai. Pemisahan kode ke dalam file `.h` dan `.cpp` membuat program lebih rapi sehingga lebih mudah diperiksa dan dikembangkan kembali.


...

## Referensi

[1] Massachusetts Institute of Technology. (2016). Reading 12: Abstract Data Types. MIT OpenCourseWare. https://ocw.mit.edu/ans7870/6/6.005/s16/classes/12-abstract-data-types/

<br>[2] OpenDSA. (2026). Abstract Data Types. Data Structures and Algorithm Design. https://opendsa.cs.vt.edu/ODSA/Books/city-tech/set2430/spring-2026/SET2430-2026/html/ADT.html

<br>[3] cppreference.com. (n.d.). Functions (C++). https://en.cppreference.com/w/cpp/language/functions
Menampilkan Template-Laprak-Strukdat.md.
