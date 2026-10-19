# <h1 align="center">Laporan Praktikum Modul 3 - ABSTRACT DATA TYPE</h1>

<p align="center">Muhammad Faiz Maulana - 109082500124</p>

## Dasar Teori
Singly Linked List adalah struktur data linier yang terdiri dari kumpulan node atau simpul yang saling terhubung melalui pointer satu arah. Setiap node memiliki dua bagian, yaitu data yang berfungsi menyimpan nilai atau informasi, serta next yang digunakan untuk menunjuk ke node berikutnya di dalam memori.

Struktur data ini bersifat dinamis, sehingga jumlah elemennya dapat bertambah maupun berkurang sesuai kebutuhan program. Node pertama ditandai dengan pointer First atau Head, sedangkan node terakhir memiliki pointer next bernilai Nil atau NULL untuk menunjukkan bahwa tidak ada lagi node setelahnya.

Beberapa operasi dasar yang dapat dilakukan pada Singly Linked List meliputi pembuatan list menggunakan createList, pengalokasian dan pembebasan memori melalui alokasi dan dealokasi, penambahan node menggunakan insertFirst, insertLast, dan insertAfter, serta menampilkan seluruh isi list dengan printInfo atau printList. Operasi-operasi tersebut digunakan untuk mengelola data agar dapat disimpan, ditambahkan, dan ditelusuri dengan mudah.

## Guided

### 1. Deklarasi ADT dan Operasi Dasar Singly Linked List

```C++
//list.h
#ifndef List_h
#define List_h
#define Nil NULL

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    int umur;
};

typedef mahasiswa dataMahasiswa;
typedef struct node *address;

struct node
{
    dataMahasiswa isidata;
    address next;
};

struct linkedlist
{
    address first;
};

bool isEmpty (linkedlist List);
void createList(linkedlist &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(linkedlist list);
void insertFirst(linkedlist &list,address nodeBaru);
void insertAfter(linkedlist &list,address nodeBaru, address prev);
void insertLast(linkedlist &list,address nodeBaru);

void delFirst(linkedlist &List);
void delLast(linkedlist &List);
void delAfter(linkedlist &List, address nodeHapus, address nodePrev);
int nbList(linkedlist List);
void deleteList(linkedlist &List);
#endif
```

```C++
//list.cpp
 #include "list.h"
#include <iostream>
using namespace std;

// I.S = Initial State / kondisi awal
// F.S = Final State / kondisi akhir

// fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(linkedlist List)
{
    if (List.first == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// pembuatan linked list kosong
void createList(linkedlist &List)
{
    {
        /* I.S. sembarang
        F.S. terbentuk list kosong */
        List.first = Nil;
    }
}

// pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur)
{
    {
        /* I.S. sembarang
        F.S. mengembalikan alamat node baru dengan isidata = sesuai parameter dan next = Nil */
        address nodeBaru = new node;
        nodeBaru->isidata.nama = nama;
        nodeBaru->isidata.nim = nim;
        nodeBaru->isidata.umur = umur;
        nodeBaru->next = Nil;
        return nodeBaru;
    }
}

// penghapusan node dengan menerapkan manajemen memori
void dealokasi(address &node)
{
        /* I.S. P terdefinisi
        F.S. memori yang digunakan node dikembalikan ke sistem */
    node->next = Nil;
    delete node;
}

// prosedur-prosedur untuk insert / menambahkan node baru kedalam list
void insertFirst(linkedlist &List, address nodeBaru)
{
    /* I.S. sembarang, P sudah dialokasikan
       F.S. menempatkan elemen list (node) pada awal list */
    nodeBaru->next = List.first;
    List.first = nodeBaru;
}

void insertAfter(linkedlist &List, address nodeBaru, address Prev)
{
    /* I.S. sembarang, nodeBaru dan Prev alamat salah satu elemen list (node)
       F.S. menempatkan elemen (node) sesudah elemen node Prev */
    if (Prev != Nil)
    {
        nodeBaru->next = Prev->next;
        Prev->next = nodeBaru;
    }
}

void insertLast(linkedlist &List, address nodeBaru)
{
    /* I.S. sembarang, nodeBaru sudah dialokasikan
       F.S. menempatkan elemen nodeBaru pada akhir list */
    if (isEmpty(List))
    {
        List.first = nodeBaru;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu->next != Nil)
        {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
}

// prosedur-prosedur untuk delete / menghapus node yang ada didalam list
void delFirst(linkedlist &List)
{
    /* I.S. list tidak kosong
       F.S. node pertama di list terhapus*/
    address nodeHapus;
    if (isEmpty(List) == false)
    {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

void delLast(linkedlist &List)
{
    /* I.S. list tidak kosong
       F.S. node terakhir di list terhapus */
    address nodeHapus, nodePrev;
    if (isEmpty(List) == false)
    {
        nodeHapus = List.first;
        if (nodeHapus->next == Nil)
        {
            List.first->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            while (nodeHapus->next != Nil)
            {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    }
    else
    {
        cout << "list kosong" << endl;
    }
}

void delAfter(linkedlist &List, address nodeHapus, address nodePrev)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        if (nodePrev != Nil && nodePrev->next !=Nil)
        {
            nodeHapus = nodePrev->next;
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

void printList(linkedlist list)
{
    if (isEmpty(list) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = list.first;
        while (nodeBantu != Nil)
        {
            cout << "Nama: " << nodeBantu->isidata.nama << ", NIM: " << nodeBantu->isidata.nim << ", Usia: " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

int nbList(linkedlist list)
{
    int count = 0;
    address nodeBantu = list.first;
    while (nodeBantu != Nil)
    {
        count++;
        nodeBantu = nodeBantu->next;
    }
    return count;
}

void deletelist(linkedlist &list)
{
    address nodeBantu, nodeHapus;
    nodeBantu = list.first;
    while (nodeBantu != Nil)
    {
        nodeHapus = nodeBantu;
        nodeBantu = nodeBantu->next;
        dealokasi(nodeHapus);
    }
    list.first = Nil;
    cout << "List sudah terhapus." << endl;
}
```


```C++
//main.cpp
 #include "list.h"
using namespace std;

int main()
{
    linkedlist List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "221110014", 21);
    nodeC = alokasi("Rizal", "231110029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    delFirst(List);
}
```
File implementasi digunakan untuk menuliskan kode program yang menjalankan fungsi dan prosedur yang telah didefinisikan pada file header list.h. Fungsi isEmpty dan createList digunakan untuk memeriksa serta membuat list dalam kondisi kosong. Selanjutnya, alokasi dan dealokasi bertugas mengatur penggunaan memori dinamis dengan operator new dan delete. Proses penambahan node dilakukan melalui insertFirst, insertAfter, dan insertLast, sedangkan penghapusan data dilakukan menggunakan delFirst, delLast, delAfter, dan deleteList. Selain itu, printList berfungsi menampilkan data mahasiswa pada terminal, sementara nbList digunakan untuk mengetahui jumlah node yang terdapat dalam list. Seluruh prosedur tersebut saling mendukung agar pengelolaan data dapat berjalan dengan baik dan penggunaan memori tetap terkontrol.


## Unguided

### 1. (Implementasi ADT Singly Linked List)

```C++
//Singlylist.h
#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;

struct ElmList {
    infotype info;
    ElmList* next;
};

typedef ElmList* address;

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif 
```

```C++
//Singlylist.cpp
#include "Singlylist.h"

void createList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    P->next = Nil;
    delete P;
}

void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}
```

```C++
//main.cpp
#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;
    
    createList(L);
    
    P1 = alokasi(2);
    insertFirst(L, P1);
    
    P2 = alokasi(0);
    insertFirst(L, P2);
    
    P3 = alokasi(8);
    insertFirst(L, P3);
    
    P4 = alokasi(12);
    insertFirst(L, P4);
    
    P5 = alokasi(9);
    insertFirst(L, P5);
    
    printInfo(L);
    
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)


File header ini digunakan sebagai dasar deklarasi ADT Singly Linked List dengan tipe data integer sesuai ketentuan praktikum. Di dalam file ini terdapat deklarasi infotype bertipe int, struktur node ElmList, tipe pointer address, serta struktur List yang memiliki atribut First sebagai penunjuk node pertama. Selain itu, file header juga memuat prototipe fungsi dan prosedur yang diperlukan, seperti createList, alokasi, dealokasi, printInfo, dan insertFirst. Deklarasi tersebut menjadi acuan bagi file implementasi dalam menjalankan operasi pada Singly Linked List.

File implementasi ini berisi kode untuk menjalankan fungsi dan prosedur yang telah dideklarasikan dalam file header Singlylist.h. Prosedur createList digunakan untuk menginisialisasi list dengan mengatur pointer First menjadi Nil. Fungsi alokasi bertugas menyediakan ruang memori untuk node baru menggunakan operator new, sedangkan dealokasi membebaskan memori yang sudah tidak digunakan dengan operator delete. Selanjutnya, printInfo digunakan untuk menelusuri setiap node dan menampilkan datanya hingga mencapai Nil. Sementara itu, insertFirst berfungsi memasukkan node baru pada bagian awal list dengan menyesuaikan hubungan antar-pointer.

File driver utama digunakan untuk menjalankan dan menguji proses pembuatan serta penambahan data pada Singly Linked List sesuai instruksi praktikum. Program memasukkan lima nilai integer, yaitu 2, 0, 8, 12, dan 9, dengan menggunakan operasi insertFirst. Karena setiap data baru ditempatkan di bagian paling depan list, susunan elemen akan berubah menjadi kebalikan dari urutan pemasukan data. Dengan demikian, hasil yang ditampilkan pada layar adalah 9 12 8 0 2.


## Kesimpulan
Praktikum Modul 4 membahas cara membuat dan menerapkan struktur data Singly Linked List dengan memanfaatkan pointer dinamis pada bahasa pemrograman C++. Penyusunan program menjadi tiga bagian, yaitu file header (.h), file implementasi (.cpp), dan file utama (main.cpp), membantu mahasiswa memahami pembuatan program yang lebih terstruktur dan modular. Selain itu, praktikum ini juga melatih penggunaan new untuk menyediakan memori dan delete untuk membebaskannya. Mahasiswa mempelajari cara mengatur hubungan antar-node saat menambahkan maupun menghapus data agar susunan list tetap terhubung dengan benar serta penggunaan memori dapat dikelola dengan baik.

...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.

<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
Menampilkan Template-Laprak-Strukdat.md.