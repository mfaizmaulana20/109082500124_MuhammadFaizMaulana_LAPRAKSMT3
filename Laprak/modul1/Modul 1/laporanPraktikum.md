# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Muhammad Faiz Maulana - 109082500124</p>

## Dasar Teori
Code:Blocks adalah Integrated Development Environment (IDE) yang bersifat gratis dan open-source serta digunakan untuk pemrograman dalam bahasa C, C++, dan Fortran. Bahasa C++ sendiri dikembangkan oleh Bjarne Stroustrup pada awal 1980-an sebagai pengembangan dari bahasa C. Dalam penyusunannya, program C++ memiliki beberapa bagian penting, seperti deklarasi pustaka (contohnya ), fungsi, dan fungsi utama `main()`. Selain itu, C++ menggunakan identifier, tipe data dasar, operator aritmatika dan logika, perintah input/output seperti `cin` dan `cout`, struktur percabangan `if-else` dan `switch`, perulangan, serta tipe data bentukan seperti `struct` untuk menghasilkan program yang lebih terstruktur.

### A. Code::Blocks dan Struktur Dasar C++<br/>
Mempelajari penggunaan Code::Blocks sebagai IDE dalam membuat program C/C++, termasuk memahami struktur dasar program, penggunaan pustaka standar, fungsi utama `main()`, serta ketentuan dasar dalam penulisan sintaks.

#### 1. Penggunaan IDE

#### 2. Variabel dan Tipe Data

#### 3. Input dan Output


### B.Kontrol Alur, Operator, dan Modularisasi Program<br/>
Pemahaman mengenai logika pemrograman yang lebih lanjut untuk mengatur jalannya program, melakukan berbagai proses perhitungan, serta menyusun kode dengan struktur yang lebih kompleks.

#### 1. Operator

#### 2. Kondisi dan Perulangan

#### 3. Struct dan Fungsi

## Guided

### 1. Operasi Aritmatika Dasar

```C++
#include<iostream>
using namespace std;
int main(){
    int w, x, y; float z;
    x = 7; y = 3; w = 1;
    z = (x + y)/(y + w);
    cout << "nilai z = "<< z << endl;
    return 0;
}
```

Program ini digunakan untuk menghitung operasi aritmatika dasar dengan memanfaatkan variabel bertipe integer dan float. Dalam proses perhitungannya, tanda kurung digunakan untuk menentukan urutan atau prioritas operator.

### 2. Operator Increment (Pre-Increment)

```C++
#include <iostream>
using namespace std;
int main(){
    int r = 10;
    int s;
    s=10 + ++r;
    cout<< "Nilai r= "<<r<<endl;
    cout<< "Nilai s= "<<s<<endl;
    return 0;
}
```

Kode tersebut menggunakan operator pre-increment (`++r`), sehingga nilai pada variabel `r` akan bertambah 1 terlebih dahulu. Setelah itu, nilai `r` yang sudah diperbarui dijumlahkan dengan angka 10 dan hasilnya disimpan ke dalam variabel `s`.

### 3. Percabangan Kondisional (if-else)

```C++
#include <iostream>
using namespace std;
int main(){
    double tot_pembelian, diskon;
    cout << " total pembelian : Rp";
    cin >> tot_pembelian;
    diskon = 0;
    if (tot_pembelian >= 100000)
        diskon = 0.05 * tot_pembelian;
    else
        diskon = 0;
    cout << "besar diskon = Rp"<<diskon;
}
```

Program tersebut menggunakan percabangan `if-else` untuk menentukan besarnya diskon yang diperoleh berdasarkan total belanja, dengan ketentuan pembelian minimal sebesar Rp100.000.

### 4. Percabangan Banyak Alternatif (switch-case)

```C++
#include <iostream>
using namespace std;
int main(){
    int kode_hari;
    puts("Menentukan hari kerja/libur\n");
    puts("1=senin 3=rabu 5=jumat 7=minggu ");
    puts("2=selasa 4=kamis 6=sabtu ");
    cin >> kode_hari;
    switch (kode_hari){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << ("Hari kerja");
            break;
        case 6:
        case 7:
            cout << ("Hari libur");
            break;
        default :
            cout << ("code masukan salah") << endl;
    }
    return 0;
}
```

Program tersebut menggunakan struktur `switch-case` untuk menentukan apakah suatu hari termasuk hari kerja atau hari libur berdasarkan kode angka yang dimasukkan oleh pengguna.


### 5. Perulangan do-while

```C++
#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int jum;
    cout<<"masukan banyak baris: ";
    cin>>jum;
    do{
        cout << "baris ke-"<< (i+1)<<endl;
        i++;
    } while (i < jum);
    return 0;
}
```

Kode tersebut menggunakan perulangan `do-while`, sehingga perintah di dalam blok akan dijalankan terlebih dahulu minimal satu kali. Setelah itu, kondisi baru diperiksa untuk menentukan apakah perulangan akan dilanjutkan.


### 6. Perulangan while

```C++
#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int jum;
    cout<<"masukan banyak baris: ";
    cin>>jum;
    while(i <= jum){
        cout << "baris ke-"<< i << endl;
        i++;
    }
    return 0;
}
```

Contoh ini menggunakan perulangan while untuk mencetak baris teks secara berulang selama nilai penghitung isi masih kurang dari atau sama dengan jumlah inputan.



### 7. Perulangan for


```C++
#include <iostream>
using namespace std;
int main(){
    int jum;
    cout << "jumlah perulangan: ";
    cin >> jum;
    for(int i = 0; i < jum; i++){
        cout << "saya pintar\n";
    }
    return 0;
}
```

Program tersebut menggunakan perulangan `for` yang cocok diterapkan ketika jumlah pengulangan yang akan dilakukan sudah dapat ditentukan sejak awal.


### 8. Array dan Struktur (Struct)

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
    int i;
    struct data{
        char nama[40];
        int nilai;
    };
    data siswa[MAX];
    for (i = 0; i < MAX; i++){
        cout << "masukkan data ke-"<<i+1<<endl;
        cout << "nama = ";
        cin >> siswa[i].nama;
        cout << "nilai = ";
        cin >> siswa[i].nilai;
    }
    cout << "\ndata siswa\n";
    cout << "=======";
    for (i = 0; i < MAX; i++){
        cout << "\n \ndata ke-"<<i+1;
        cout << "\n \nnama = "<<siswa[i].nama;
        cout << "\n \nnilai = "<<siswa[i].nilai;
    }
    return 0;
}
```

Kode tersebut menggunakan `struct` dan array untuk menyimpan data beberapa mahasiswa secara teratur, dengan informasi yang mencakup nama dan nilai masing-masing mahasiswa.


### 9. Modularisasi Program dengan Fungsi

```C++
#include <iostream>
using namespace std;

float ctof(float celcius);
int main() {
    float celcius, fahrenheit;
    cout <<"nilai Celcius? ";
    cin >> celcius;
    fahrenheit = ctof(celcius);
    cout<<celcius<<" Celcius adalah "<<fahrenheit<<" Fahrenheit"<<endl;
    return 0;
}

float ctof(float celcius){
    return (celcius * 1.8) + 32;
}
```

Pada program ini terdapat fungsi `ctof` yang dibuat sendiri untuk melakukan konversi suhu dari Celsius menjadi Fahrenheit. Penggunaan fungsi tersebut membuat proses perhitungan terpisah dari bagian utama program, sehingga susunan kode lebih teratur dan mudah dikelola.


## Unguided

### 1. (Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.)

```C++
#include <iostream>
using namespace std;

int main() {
    float bil1, bil2;

	cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    float penjumlahan = bil1 + bil2;
    float pengurangan = bil1 - bil2;
    float perkalian   = bil1 * bil2;
    float pembagian   = bil1 / bil2;

    cout << "\nHasil operasi:" << endl;
    cout << "Penjumlahan : " << bil1 << " + " << bil2 << " = " << penjumlahan << endl;
    cout << "Pengurangan : " << bil1 << " - " << bil2 << " = " << pengurangan << endl;
    cout << "Perkalian   : " << bil1 << " x " << bil2 << " = " << perkalian << endl;
    cout << "Pembagian   : " << bil1 << " / " << bil2 << " = " << pembagian << endl;

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)


Program tersebut digunakan untuk menerima dua bilangan dari pengguna, kemudian melakukan empat operasi aritmatika dasar, yaitu penjumlahan, pengurangan, perkalian, dan pembagian. Hasil dari setiap operasi kemudian ditampilkan menggunakan cout.

### 2. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100)

```C++
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
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)



Program tersebut digunakan untuk mengubah angka **0 sampai 100 menjadi bentuk terbilang** dalam bahasa Indonesia. Fungsi `terbilang()` mengatur proses konversi angka, sedangkan `if-else` pada `main()` digunakan untuk memastikan angka yang dimasukkan berada dalam rentang 0–100.

### 3. (Buatlah program yang dapat memberikan input dan output sbb.)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;

    cout << "output:" << endl;
    for (int i = n; i >= 0; i--) {
        for (int s = 0; s < n - i; s++) cout << "  ";

        for (int j = i; j >= 1; j--) cout << j << " ";

        cout << "*";

        for (int j = 1; j <= i; j++) cout << " " << j;

        cout << endl;
    }
    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)


Program tersebut menggunakan **perulangan bersarang (nested loop)** untuk membuat pola angka dengan tanda `*`. Perulangan pertama mengatur jumlah baris, sedangkan perulangan berikutnya digunakan untuk mengatur **spasi dan susunan angka di sebelah kiri dan kanan tanda `*`** hingga membentuk pola sesuai nilai input.

## Kesimpulan
Berdasarkan praktikum Modul 1, dapat disimpulkan bahwa dalam pemrograman C++ terdapat beberapa dasar yang perlu dipahami, mulai dari variabel dan tipe data, input dan output, operator, percabangan, perulangan, array, struct, hingga fungsi. Dari praktikum ini, saya memahami bahwa setiap struktur memiliki fungsi masing-masing. Percabangan seperti `if-else` dan `switch-case` digunakan untuk menentukan kondisi, sedangkan `for`, `while`, dan `do-while` digunakan untuk melakukan proses perulangan. Selain itu, array, struct, dan fungsi dapat digunakan untuk membuat program menjadi lebih teratur dan mudah dipahami. Pada soal unguided, materi yang telah dipelajari diterapkan dalam pembuatan program untuk melakukan perhitungan aritmatika, mengubah angka menjadi bentuk tulisan, dan membuat pola angka dengan perulangan. Melalui praktikum ini, pemahaman saya mengenai dasar-dasar pemrograman C++ menjadi lebih baik dan dapat digunakan sebagai bekal untuk mempelajari materi berikutnya.

...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>[3]Nurhayati, S. (2013). Konsep Dasar Algoritma dan Pemrograman Terstruktur. Bandung: Universitas Komputer Indonesia. Materinya membahas konsep dasar algoritma dan pemrograman terstruktur.
<br>[4]Mardzuki, T. H. (2016). Struktur Algoritma (Runtunan dan Pemilihan Analisis Satu Kasus). Bandung: Universitas Komputer Indonesia. Materi ini membahas struktur runtunan, pemilihan, dan pengulangan dalam algoritma.
Menampilkan Template-Laprak-Strukdat.md.