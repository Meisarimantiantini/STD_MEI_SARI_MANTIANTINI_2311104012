#ifndef KERUCUT_H
#define KERUCUT_H

// Definisi PI
#define PI 3.14159

// ADT Kerucut
typedef struct {
    double radius;   // Jari-jari alas
    double tinggi;   // Tinggi kerucut
} Kerucut;

// Fungsi untuk membuat kerucut baru
Kerucut create_kerucut(double radius, double tinggi);

// Fungsi untuk menghitung volume kerucut
double volume_kerucut(Kerucut k);

// Fungsi untuk menghitung luas permukaan kerucut
double luas_permukaan_kerucut(Kerucut k);

#endif
