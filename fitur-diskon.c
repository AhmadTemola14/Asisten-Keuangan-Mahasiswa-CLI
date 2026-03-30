#include <stdio.h>

void kalkulatorDiskon() {
    float harga_awal, diskon, harga_akhir;

    printf("\n=== Kalkulator Diskon Belanja ===\n");

    printf("Masukkan harga awal: ");
    scanf("%f", &harga_awal);

    printf("Masukkan diskon (%%): ");
    scanf("%f", &diskon);

    harga_akhir = harga_awal - (harga_awal * diskon / 100);

    printf("Harga setelah diskon: %.2f\n", harga_akhir);
}