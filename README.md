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
  3. jika nama yang diinput benar maka program akan meminta nilai esai dan pg
  4. ketika user menginputkan nilai, program akan menghitung total dan rata rata dari nilai tersebut
  5. setelah program menghitung nilai, program akan memberi predikat apakah anak tersebut LULUS atau REMEDIAL
  6. hasil akhir program akan menampilkan nama yang diinput, nilai total dan rata rata serta predikat nilainya REMEDIAL/LULUS
 
- Konsep yang digunakan:
 - Input/output:
 - 1. input nama siswa menggunakan huruf kecil agar mengurangi resiko salah ketik:
     while (1) {
        printf("masukan nama siswa kelas 7b dengan huruf kecil:");
        scanf("%s", namaInput);}
      
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
        }
    }
}

 - 5. output akhir jika nama tidak salah 3 kali maka akan menampilkan total nilai, rata rata dan predikatnya:
  
       printf("\nnama = %s\n", namaInput);
    printf("total nilai = %.2f\n", total);
    printf("Rata - rata = %.2f\n", rataRata);

 - Variabel:
 - 1. Terdapat variable daftar nama siswa 8 orang dengan tipe data array berdimensi dua dengan tipe char untuk menyimpan 8 nama siswa dan 30 karakter:
      
       char daftarNama[8][30] = {"fara", "ratna", "amira", "sinta", "leon", "sandi", "restu", "yuni"};

 - 2. terdapat variable tipe data char array:
      
      char namaInput[30];
      
 - 3. terdapat variable nilai esai dan nilai pg untuk input nilai jika nama terdaftar dengan tipe data float:
      
      float nilaiEsai, nilaiPG;
      
 - 5. terdapat variable percobaan tipe data integer yang akan bertambah nilainya:
      
      int percobaan = 0;
      
 - 6. terdapat variabel i digunakan dalam perulangan for untuk mengecek setiap nama dalam array daftarNama, dari 0 sampai 7.
      
      for (int i = 0; i < 8; i++)
      
 - 7. terdapat variable benar yang akan berubah nilainya menjadi 1 jika input nama benar

       int benar = 0;
        for (int i = 0; i < 8; i++){
            if(strcmp(namaInput, daftarNama[i]) == 0){
                benar = 1;
                break;
            }

        }
      
 - If-else:
 - 1. terdapat if untuk kondisi jika karakter sama maka variable benar nilainya akan menjadi 1
      
   if(strcmp(namaInput, daftarNama[i]) == 0){
                benar = 1;
      
- 2. terdapat if untuk kondisi jika nilai variable benar maka selanjutnya langsung ke input nilai
     
    if(benar){
        break;
    }
     
- 3. terdapat else jika tidak benar maka variable percobaan ditambah, ada if lagi disini jika percobaan lebih dari sama dengan 3 maka program akan dihentikan
     
    else{
    percobaan++; 
        printf("nama tidak ditemukan\n");

    // membatasi percobaan hanya 3 kali
    if(percobaan >=3) {

        printf("nama tidak valid mencapai batas, program dihentikan\n");
        return 0;
        }
    }
}
     
 - Loop (perulangan)
 - 1. perulangan while(1) akan meminta terus input nama sampai nama yang diinputkan benar ada didaftar nama siswa kelas 7b ini juga loop selamanya dan akan dihentikan oleh "break" saat nama sudah ditemukan
            
- 2. didalam while ada perulangan for ini untuk mengecek apakah nama sudah cocok dengan yang ada divariable daftar nama, disini i berjalan dari 0 sampai 7 (i < 8) untuk memeriksa seluruh daftar yanga ada dinama.jika ditemukan nama yang cocok maka variabel benar diset ke 1 dan keluar dari for dengan break.
     
 while (1) {
        printf("masukan nama siswa kelas 7b dengan huruf kecil:");
        scanf("%s", namaInput);

        int benar = 0;
        for (int i = 0; i < 8; i++){
            if(strcmp(namaInput, daftarNama[i]) == 0){
                benar = 1;
                break;
            }
        }
        if(benar){
        break;
    }


- Fungsi : int main() dan juga fungsi untuk cek karakter yaitu strcmp dari library <string.h>
  
- Array: ketika program menyimpan berapa nama siswa dan maksimal karakternya:
  
  char daftarNama[8][30] = {"fara", "ratna", "amira", "sinta", "leon", "sandi", "restu", "yuni"};
  
  char namaInput[30

## Link Video Demo :
https://youtu.be/m3tfXazaz1Y
