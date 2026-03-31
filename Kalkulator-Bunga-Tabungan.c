#include <stdio.h>

void hitungBunga() {
    float saldoAwal, persenBunga;
    float nilaibunga, totalAkhir;

    printf("\n--- KALKULATOR BUNGA TABUNGAN ---\n");
    printf("Masukkan saldo awal (Rp): ");
    scanf("%f", &saldoAwal);

    printf("Masukkan persentase bunga bulanan (%%): ");
    scanf("%f", &persenBunga);

    // Validasi input
    if (saldoAwal < 0 || persenBunga < 0) {
        printf("[!] Input tidak valid!\n");
        return;
    }

    nilaibunga = saldoAwal * (persenBunga / 100);
    totalAkhir = saldoAwal + nilaibunga;

    printf("\n  Saldo awal      : Rp %.2f\n", saldoAwal);
    printf("  Bunga (%.2f%%)   : Rp %.2f\n", persenBunga, nilaibunga);
    printf("  ─────────────────────────────\n");
    printf("  Total setelah bunga: Rp %.2f\n", totalAkhir);
}