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