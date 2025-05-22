#include <stdio.h>
#include <string.h>

int main(){
// menyimpan data nama siswa 7b 8 orang dan maks 30 karakter 
    char daftarNama[8][30] = {"fara", "ratna", "amira", "sinta", "leon", "sandi", "restu", "yuni"};

// nama yang diinputkan user maks 30 karakter
    char namaInput[30];
    float nilaiEsai, nilaiPG;
    int percobaan = 0;

// untuk loop pengecekan nama sampai nama benar dan dihentikan oleh break jika nama sudah benar
  
    while (1) {
        printf("masukan nama siswa kelas 7b dengan huruf kecil:");
        scanf("%s", namaInput);

// mengecek apakah karakter cocok dan juga dan memeriksa seluruh nama dalamdaftar nama
        int benar = 0;
        for (int i = 0; i < 8; i++){
            if(strcmp(namaInput, daftarNama[i]) == 0){
                benar = 1;
                break;
            }

        }
    

    // jika nama yang diinput benar selanjutnya input nilai else akan diloncat
    if(benar){
        break;
    }

    // percobaan akan bertambah jika nama yang diinputkan salah
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