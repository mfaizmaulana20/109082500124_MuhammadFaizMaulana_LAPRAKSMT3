# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Muhammad Faiz Maulana - 109082500124</p>

## Dasar Teori
Pada praktikum Modul 2, saya mempelajari beberapa konsep dasar dalam bahasa C++, yaitu Array, Pointer, Fungsi, dan Prosedur.

* Array: Array merupakan sekumpulan data yang memiliki nama variabel yang sama dan setiap elemennya menggunakan tipe data yang sama. Setiap data dalam array dapat diakses berdasarkan indeksnya. Array dapat dibedakan menjadi array satu dimensi, array dua dimensi yang memiliki bentuk seperti tabel, dan array multidimensi. Pada C++, elemen array disimpan secara berurutan di dalam memori dan indeks pertama dimulai dari angka 0.

* Pointer: Pointer merupakan variabel yang digunakan untuk menyimpan alamat memori dari variabel lain. Alamat tersebut dapat diperoleh menggunakan operator `&`, sedangkan operator `*` digunakan untuk mengakses nilai yang berada pada alamat tersebut. Pointer memiliki hubungan dengan array karena elemen array juga dapat diakses menggunakan operasi pointer. Selain itu, pointer dapat digunakan dalam pengolahan rentetan karakter atau string.

* Fungsi dan Prosedur: Fungsi merupakan sekumpulan kode yang dibuat untuk menjalankan tugas tertentu sehingga program menjadi lebih terstruktur, mudah digunakan kembali, dan dapat mengurangi penulisan kode yang sama secara berulang. Sementara itu, prosedur dalam C++ dapat diterapkan menggunakan fungsi `void`, yaitu fungsi yang menjalankan suatu proses tanpa mengembalikan nilai.

* Parameter: Parameter merupakan nilai atau data yang digunakan sebagai masukan ke dalam sebuah fungsi. Parameter terdiri dari parameter formal, yaitu parameter yang dituliskan ketika fungsi dibuat, dan parameter aktual, yaitu nilai yang diberikan ketika fungsi dipanggil. Dalam C++, terdapat beberapa cara untuk melewatkan parameter, yaitu Call by Value, Call by Pointer, dan Call by Reference. Call by Value hanya mengirimkan salinan nilai sehingga perubahan tidak memengaruhi variabel asli. Call by Pointer mengirimkan alamat memori menggunakan pointer, sedangkan Call by Reference menggunakan referensi sehingga perubahan yang dilakukan di dalam fungsi dapat memengaruhi variabel aslinya.



## Guided

### 1. Array

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int i, j;
    float nilai_total, rata_rata;
    float nilai [MAX];
    static int nilai_tahun [MAX] [MAX]=
    {
        {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };

    for (i=0; i<MAX; i++) {
        cout<<"masukkan nilai ke-"<<i+1<<endl;
        cin>>nilai[i];
    }
    cout<<"\ndata nilai siswa :\n";

    for (i=0; i<MAX; i++)
        cout<<"nilai ke-"<<i+1<<"="<<nilai[i]<<endl;
    cout<<"\n nilai tahunan : \n";

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++)
            cout<<nilai_tahun[i] [j];
        cout<<"\n";
    }
    return 0;
}
```

Program ini digunakan untuk menginput 5 buah nilai dari pengguna, kemudian menyimpan nilai tersebut ke dalam program. Setelah itu, semua nilai yang telah dimasukkan akan ditampilkan kembali. Program juga menampilkan matriks angka berukuran 5 x 5 dengan pola yang telah ditentukan.

### 2. Pointer

```C++
#include <iostream>

using namespace std;

int main() {
    int x, y;    
    int *px;      

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi X = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Nilai y = " << y << endl;

    return 0;
}
```

Program ini dibuat untuk memahami penerapan pointer pada bahasa C++. Pertama, variabel `x` diisi dengan nilai 87. Setelah itu, pointer `px` digunakan untuk menunjuk ke alamat memori dari `x`. Nilai yang terdapat pada `x` kemudian dimasukkan ke variabel `y`. Terakhir, program menampilkan alamat memori beserta nilai dari variabel-variabel tersebut.

### 3. Fungsi
```C++
#include <iostream>
using namespace std;

int maks3(int a, int b, int c);

int main() {
    int x, y, z;

    cout << "Masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "Masukkan nilai bilangan ke-2 = ";
    cin >> y;
    cout << "Masukkan nilai bilangan ke-3 = ";
    cin >> z;

    cout << "Nilai maksimumnya adalah = " << maks3(x, y, z) << endl;

    return 0;
}

int maks3(int a, int b, int c) {
    int temp_max = a;

    if (b > temp_max) {
        temp_max = b;
    }
    if (c > temp_max) {
        temp_max = c;
    }

    return temp_max;
}
```

Program ini digunakan untuk menerima 3 angka yang dimasukkan oleh pengguna. Selanjutnya, fungsi `maks3` digunakan untuk membandingkan ketiga angka tersebut dan menentukan nilai yang paling besar. Hasil nilai terbesar kemudian ditampilkan pada layar.

### 4. Prosedur
```C++
#include <iostream>
using namespace std;

void tulis(int x);
int main() {
    int jum;
    
    cout << "jumlah baris kata = ";
    cin >> jum;
    
    tulis(jum);
    
    return 0;
}

void tulis(int x) {
    for (int i = 0; i < x; i++) {
        cout << "baris ke-" << i + 1 << endl;
    }
}
```

Program ini digunakan untuk menerima jumlah baris yang diinput oleh pengguna. Setelah itu, fungsi `tulis` akan menampilkan tulisan "baris ke-n" secara berulang sesuai dengan jumlah baris yang telah dimasukkan.


### 5. Parameter

```C++
#include <iostream>
using namespace std;

void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4, b = 6;

    tukarValue(a, b);
    cout << "Setelah Call by Value    -> a = " << a << ", b = " << b << " (Tetap)" << endl;

    tukarPointer(&a, &b);
    cout << "Setelah Call by Pointer  -> a = " << a << ", b = " << b << " (Berubah!)" << endl;

    tukarReference(a, b);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << " (Berubah lagi!)" << endl;

    return 0;
}
```

Program ini digunakan untuk memperlihatkan perbedaan cara kerja tiga metode pengiriman parameter dalam C++, yaitu Call by Value, Call by Pointer, dan Call by Reference. Ketiga metode tersebut diterapkan untuk melakukan proses pertukaran nilai dari dua variabel, sehingga dapat dilihat perbedaan hasil dari masing-masing metode.


## Unguided

### 1. (Operasi Aritmatika Matriks 3x3)

```C++
#include <iostream>
using namespace std;

void tampilkanMatriks(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int hasil[3][3];

    cout << "Matriks 1:" << endl;
    tampilkanMatriks(mat1);
    cout << "\nMatriks 2:" << endl;
    tampilkanMatriks(mat2);

    cout << "\n--- Penjumlahan Matriks ---" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    tampilkanMatriks(hasil);

    cout << "\n--- Pengurangan Matriks ---" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    tampilkanMatriks(hasil);

    cout << "\n--- Perkalian Matriks ---" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                hasil[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    tampilkanMatriks(hasil);

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)


Program ini digunakan untuk mengolah dua matriks berukuran 3x3, yaitu `mat1` dan `mat2`. Kedua matriks tersebut kemudian diproses menggunakan beberapa operasi dasar, seperti penjumlahan, pengurangan, dan perkalian. Setiap operasi dilakukan dengan bantuan fungsi yang telah dibuat, kemudian hasil dari masing-masing perhitungan ditampilkan pada layar.


### 2. (Pertukaran Tiga Variabel Menggunakan Pointer dan Reference)

```C++
#include <iostream>
using namespace std;

void tukarReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void tukarPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x = 10, y = 20, z = 30;

    cout << "Nilai Awal        -> x: " << x << ", y: " << y << ", z: " << z << endl;

    tukarReference(x, y, z);
    cout << "Setelah Reference -> x: " << x << ", y: " << y << ", z: " << z << endl;

    tukarPointer(&x, &y, &z);
    cout << "Setelah Pointer   -> x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)


Program ini digunakan untuk menunjukkan proses pertukaran nilai pada tiga variabel, yaitu `x`, `y`, dan `z`. Proses swapping dilakukan dengan dua cara, yaitu menggunakan **reference** dan **pointer**, sehingga dapat diketahui bagaimana kedua metode tersebut dapat mengubah nilai variabel secara langsung.

### 3. (Menu Interaktif Pengolahan Data Array (Maksimum, Minimum, dan Rata-rata))

```C++
#include <iostream>
using namespace std;

int cariMaksimum(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int cariMinimum(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int size, float &rata_rata) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += arr[i];
    }
    rata_rata = (float)total / size;
}

int main() {
    int arrA[] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int size = sizeof(arrA) / sizeof(arrA[0]);
    int pilihan;
    float rata_rata = 0;

    do {
        cout << "\nMenu Program Array" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. cari nilai maksimum" << endl;
        cout << "3. cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata - rata" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Isi Array: ";
                for(int i = 0; i < size; i++) {
                    cout << arrA[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Nilai maksimum: " << cariMaksimum(arrA, size) << endl;
                break;
            case 3:
                cout << "Nilai minimum: " << cariMinimum(arrA, size) << endl;
                break;
            case 4:
                hitungRataRata(arrA, size, rata_rata); 
                cout << "Nilai rata-rata: " << rata_rata << endl; 
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while(pilihan != 0);

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)


Program ini berfungsi sebagai aplikasi menu interaktif berbasis array untuk mengolah sekumpulan data angka, di mana pengguna dapat memilih opsi untuk menampilkan isi array, mencari nilai maksimum, mencari nilai minimum, atau menghitung nilai rata-rata melalui fungsi-fungsi terpisah.



## Kesimpulan
Berdasarkan praktikum Modul 2, dapat disimpulkan bahwa bahasa C++ memiliki beberapa konsep dasar yang penting dalam pembuatan program, yaitu array, pointer, fungsi, prosedur, dan parameter. Melalui beberapa program yang telah dibuat, saya dapat memahami cara menyimpan dan mengolah data menggunakan array, serta mengetahui bagaimana pointer dapat digunakan untuk mengakses alamat dan nilai yang tersimpan di memori.

Selain itu, praktikum ini juga membantu memahami penggunaan fungsi dan prosedur untuk membuat program menjadi lebih terstruktur dan mengurangi penulisan kode yang berulang. Penggunaan parameter dengan metode Call by Value, Call by Pointer, dan Call by Reference juga dapat dipahami melalui proses pertukaran nilai pada variabel. Dengan adanya praktikum ini, saya menjadi lebih memahami cara kerja array, pointer, fungsi, dan prosedur serta penerapannya dalam program C++.


...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
Menampilkan Template-Laprak-Strukdat.md.