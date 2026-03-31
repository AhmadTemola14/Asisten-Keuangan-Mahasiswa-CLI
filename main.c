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

void hitungBunga() {
    float saldoAwal, persenBunga;
    float nilaiBunga, totalAkhir;

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

    // Proses perhitungan
    nilaiBunga = saldoAwal * (persenBunga / 100);
    totalAkhir = saldoAwal + nilaiBunga;

    // Output hasil
    printf("\n--- HASIL PERHITUNGAN ---\n");
    printf("Saldo awal     : Rp %.2f\n", saldoAwal);
    printf("Bunga          : Rp %.2f\n", nilaiBunga);
    printf("Total akhir    : Rp %.2f\n", totalAkhir);
}

void kalkulatorSisaUang() {
    int uangSaku, pengeluaran, sisaUang;

    printf("\n=== Kalkulator Sisa Uang Jajan ===\n");

    printf("Masukkan uang saku hari ini: ");
    scanf("%d", &uangSaku);

    printf("Masukkan estimasi pengeluaran hari ini: ");
    scanf("%d", &pengeluaran);

    sisaUang = uangSaku - pengeluaran;

    printf("Sisa uang jajan hari ini: Rp %d\n", sisaUang);
}




int main() {
    int pilihan;

    printf("=== Menu Utama ===\n");
    printf("1. Kalkulator Diskon\n");
    printf("2. Hitung split bill\n");
    printf("3. Hitung Bunga\n");
    printf("4. Kalkulator Sisa Uang\n");
    printf("5. Keluar\n");
    printf("Pilih: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            kalkulatorDiskon();
            break;

        case 2: 
    float total;
    int orang;

    printf("Masukkan total tagihan: ");
    scanf("%f", &total);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &orang);

    hitungSplitBill(total, orang);
    break;

        case 3:
            hitungBunga();
            break;

        case 4:
            kalkulatorSisaUang();
            break;

        case 5:
            printf("Keluar...\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
    }

    return 0;
}