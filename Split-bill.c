#include <stdio.h>

// Fungsi void untuk menghitung dan menampilkan split bill
void hitungSplitBill(float total, int orang) {
    if (orang <= 0) {
        printf("\nError: Jumlah orang tidak valid!\n");
        return;
    }

    float hasil = total / orang;

    printf("\n========== RINCIAN PEMBAYARAN ==========\n");
    printf("Total Tagihan    : Rp %.2f\n", total);
    printf("Jumlah Peserta   : %d orang\n", orang);
    printf("----------------------------------------\n");
    printf("Tagihan per orang: Rp %.2f\n", hasil);
    printf("========================================\n");
}

