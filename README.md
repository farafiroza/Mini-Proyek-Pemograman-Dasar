# Mini Proyek - Coding untuk Kakak Tingkat

## Identitas Mahasiswa
- Nama: [Fara Firoza]
- NIM: [2407540]
- Kelas: [2B]
## Identitas Kakak Tingkat
- Nama: [Tara Lestari]
- Angkatan: [2023]
- Program Studi: [Pendidikan Sistem dan Teknologi Informasi]

## Permintaan Program
> "[Penghitung rata-rata nilai : Masukkan beberapa nilai, Program menghitung total dan rata-rata, Menggunakan loop sederhana dan perhitungan dasar.]"

## Penjelasan Program
- Bahasa pemrograman yang digunakan: C
- Fitur utama:
- 1. program memvalidasi nama, nama telah ditentukan ada array ada 8 nama dan masing masing tidak lebih dari 30 karakter
  2. user menginputkan nama siswa jika salah maka program akan dihentikan
  3. jika program benar maka program akan selalu meminta nilai esai dan pg sebelum lebih dari 8 kali sesuai jumlah siswa
  4. ketika user menginputkan nilai program akan menghitung total dan rata rata dari nilai tersebut
  5. setelah program menghitung nilai program akan memberi predikat apakah anak tersebut LULUS atau REMEDIAL
  6. hasil akhir program akan menampilkan nama yang diinput, nilai total dan rata rata serta predikat nilainya REMEDIAL/LULUS
 
- Konsep yang digunakan:
 - Input/output:
 - 1. input nama siswa menggunakan huruf kecil agar mengurangi resiko salah ketik: printf("masukan nama siswa kelas 7b dengan huruf kecil:");
       scanf("%s", namaInput);
 - 2. Input nama kembali jika gagal dalam batasan kurang dari 3 kali
 - 3. input nilai esai dan pg
    printf("masukan nilai esai: ");
    scanf("%f", &nilaiEsai);
    printf("masukan nilai pilihan ganda: ");
    scanf("%f", &nilaiPG);
 - 4. output jika nama diinputkan salah 3kali:
      if(percobaan >=3) {
        printf("nama tidak valid mencapai batas, program dihentikan\n");
        return 0;
 - 5. output akhir jika nama tidak salah 3 kali maka akan menampilkan total nilai, rata rata dan predikatnya:
    printf("\nnama = %s\n", namaInput);
    printf("total nilai = %.2f\n", total);
    printf("Rata - rata = %.2f\n", rataRata);
 if(rataRata >= 70) {
        printf("LULUS\n");
    } else {
        printf("REMEDIAL\n");
    }
    return 0;
    
 - Variabel:
 - 1. Terdapat variable daftar nama siswa 8 orang dengan tipe data char
      char daftarNama
 - 2. terdapat variable tipe data int:
      char namaInput;
 - 3. terdapat variable nilai esai dan nilai pg untuk input nilai jika nama terdaftar dengan tipe data float:
      float nilaiEsai, nilaiPG;
 - 5. terdapat variable percobaan tipe data integer yang akan bertambah nilainya:
      int percobaan = 0;
 - 6. terdapat varible i dalam looping menghitung apakah input nama sudah lebih dari sama dengan 8 kali:
      for (int i = 0; i < 8; i++)
 - 7. terdapat variable benar yang akan berubah nilainya menjadi 1 atau true jika input nama benar
      int benar = 0; 
   
 - If-else:
   
 - Loop (perulangan)
- Fungsi
- Array
