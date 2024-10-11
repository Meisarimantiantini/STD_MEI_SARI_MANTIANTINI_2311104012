#include "kerucut.h"
#include <cmath>   // Untuk fungsi sqrt

// Implementasi fungsi create_kerucut
Kerucut create_kerucut(double radius, double tinggi) {
    Kerucut k;
    k.radius = radius;
    k.tinggi = tinggi;
    return k;
}

// Implementasi fungsi untuk menghitung volume kerucut
double volume_kerucut(Kerucut k) {
    return (1.0 / 3.0) * PI * pow(k.radius, 2) * k.tinggi;
}

// Implementasi fungsi untuk menghitung luas permukaan kerucut
double luas_permukaan_kerucut(Kerucut k) {
    double s = sqrt(pow(k.radius, 2) + pow(k.tinggi, 2));  // Garis pelukis
    return (PI * k.radius * (k.radius + s));
}
