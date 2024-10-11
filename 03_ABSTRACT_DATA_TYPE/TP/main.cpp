#include "kerucut.h"
#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel untuk radius dan tinggi kerucut
    double radius, tinggi;

    // Meminta input dari user
    cout << "Masukkan jari-jari alas kerucut: ";
    cin >> radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> tinggi;

    // Membuat objek kerucut
    Kerucut k = create_kerucut(radius, tinggi);

    // Menghitung volume dan luas permukaan kerucut
    double volume = volume_kerucut(k);
    double luas_permukaan = luas_permukaan_kerucut(k);

    // Menampilkan hasil perhitungan
    cout << "Volume kerucut: " << volume << endl;
    cout << "Luas permukaan kerucut: " << luas_permukaan << endl;

    return 0;
}
