## Mini-Proyek-Pemograman-Dasar
program berfungsi untuk validasi nama, menghitung nilai total dan rata rata serta fitur block atau berhenti ketika nama input salah 3 kali.

Nama: Fara Firoza
Kelas: 7B
Proyek: Tugas Pemrograman Dasar – Validasi dan Perhitungan Nilai

## Program Validasi Nama dan Perhitungan Nilai
program ini merupakan tugas pemrograman dasar sesuai permintaan kaka tingkat yaitu menghitung total dan rata dengan sedikit modifikasi. tujuannya adalah untuk memvalidasi input nama siswa yang terdaftar pada kelas disini saya menggunakan nama kelas 7b, meminta user untuk input nilai esai dan pilihan ganda, lalu menghitung total dan rata-rata kemudian dari nilai tersebut akan ditampilkan predikat apakah siswa tersebut lulus atau remedial.

## Fitur Program
- memvalidasi nama dari daftar 8 siswa kelas 7B disini saya menggunakan array [8][20].
- maksimal 3 kali percobaan untuk memasukkan nama jika lebih maka programnya akan dihentikan.
- hanya menginputkan nilai esai dan pilihan ganda.
- mengitung total nilai dan rata-rata.
- menampilkan status "LULUS" atau "REMEDIAL" setelah total dan rata rata terhitung.
- diakhir ada output nama yang diinput, nilai totalnya, nilai rata-ratanya dan juga predikat remedial/lulus
- untuk library atau header saya hanya menggunakan : #include <stdio.h> → untuk input/output.
- dan fungsi tidak menggunakan fungsi baru hanya bawaan dari bahasa c yaitu int main()
- loop disini saya menggunakan while(1)/forever dan menggunakan break agar dia tau kapan berhenti dan juga saya menggunakan loop for
- saya menggunakan if dan else untuk kondisional karena pada program ini cukup banyak kondisionalnya
 
## Alur Program
1. program menyimpan daftar nama siswa kelas 7b.
2. user diminta memasukkan nama kelas 7b dengan huruf kecil bertujuan tidak ada yang mengetik huruf besar agar lebih efisien dan optimal.
3. jika nama cocok, program lanjut meminta nilai.
4. jika nama salah atau tidak cocok,program akan memberikan kesempatan hingga 3 kali.
5. jika nama benar akan langsung pada proses ini:
   - user akan input nilai esai kemudian nilai pilihan ganda
   - program akan menghitung total = nilai esai + pilihan ganda.
   - program akan menghitung rata-rata = total dibagi 2.
   - program akan menampilkan nama, total, rata-rata, dan status kelulusan.

## Source Code
#include <stdio.h>

int main(){
// menyimpan data nama siswa 7b 8 orang dan maks 30 karakter 
    char daftarNama[8][30] = {"fara", "ratna", "amira", "sinta", "leon", "sandi", "restu", "yuni"};

// nama yang diinputkan uset maks 30 karakter
    char namaInput[30];
    float nilaiEsai, nilaiPG;
    int percobaan = 0;

// untuk loop pengecekan nama sampai nama benar
  
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
    

    // jikan nama yang diinput benar selanjutnya input nilai
    if(benar){
        break;
    }

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

// menginputkan nilai
    printf("masukan nilai esai: ");
    scanf("%f", &nilaiEsai);

    printf("masukan nilai pilihan ganda: ");
    scanf("%f", &nilaiPG);

    // menghitung total dan rata rata nilai
    float total = nilaiEsai + nilaiPG;
    float rataRata = total/2;

    // menampilkan hasil
    printf("\nnama = %s\n", namaInput);
    printf("total nilai = %.2f\n", total);
    printf("Rata - rata = %.2f\n", rataRata);

    // program mengecek dari nilai apakah lulus atau remedial
    if(rataRata >= 70) {
        printf("LULUS\n");
    } else {
        printf("REMEDIAL\n");
    }
    return 0;
}

# Contoh Output Program: Input Salah 3 kali
- masukan nama siswa kelas 7b dengan huruf kecil:nina
- nama tidak ditemukan
- masukan nama siswa kelas 7b dengan huruf kecil:nina
- nama tidak ditemukan
- masukan nama siswa kelas 7b dengan huruf kecil:nian
- nama tidak ditemukan
- nama tidak valid mencapai batas, program dihentikan

## Contoh Output Program: input salah kemudian benar dan menampilkan predikat
- masukan nama siswa kelas 7b dengan huruf kecil:rio
- nama tidak ditemukan
- masukan nama siswa kelas 7b dengan huruf kecil:tio
- nama tidak ditemukan
- masukan nama siswa kelas 7b dengan huruf kecil:fara
- masukan nilai esai: 80
- masukan nilai pilihan ganda: 90

- nama = fara
- total nilai = 170.00
- Rata - rata = 85.00
- LULUS

## Contoh Output Program: input nama langsung benar dan menampilkan predikatmasukan nama siswa kelas 7b dengan huruf kecil:sandi
- masukan nilai esai: 70
- masukan nilai pilihan ganda: 50

- nama = sandi
- total nilai = 120.00
- Rata - rata = 60.00
- REMEDIAL
