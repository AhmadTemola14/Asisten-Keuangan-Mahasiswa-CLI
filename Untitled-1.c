void kalkulatorSisaUang() {
  int uangSaku;
  int pengeluaran;
  int sisaUang;

  Serial.println("=== Kalkulator Sisa Uang Jajan ===");

  Serial.print("Masukkan uang saku hari ini: ");
  while (Serial.available() == 0) {}
  uangSaku = Serial.parseInt();

  Serial.print("Masukkan estimasi pengeluaran hari ini: ");
  while (Serial.available() == 0) {}
  pengeluaran = Serial.parseInt();

  sisaUang = uangSaku - pengeluaran;

  Serial.print("Sisa uang jajan hari ini: ");
  Serial.println(sisaUang);
}