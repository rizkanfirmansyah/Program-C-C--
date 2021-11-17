#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char nama[25];
    char alamat[100];
    char jenis_kelamin[1];
    char tempat_lahir[25];
    char tanggal_lahir[25];
    char golongan_darah[2];
    double tinggi_badan;
    float berat_badan;
    bool sudah_vaksin;
    char str_sudah_vaksin[1];
    int sudah_vaksin2;

    printf("Tuliskan nama : ");
    scanf("%s", nama);
    printf("Tuliskan alamat  : ");
    scanf("%s", alamat);
    printf("Tuliskan jenis kelamin (L/P) : ");
    scanf("%s", jenis_kelamin);
    printf("Tuliskan tempat lahir : ");
    scanf("%s", tempat_lahir);
    printf("Tuliskan tanggal lahir : ");
    scanf("%s", tanggal_lahir);
    printf("Tuliskan golongan darah (A/B/AB/O) : ");
    scanf("%s", golongan_darah);
    printf("Tuliskan tinggi badan : ");
    scanf("%lf", &tinggi_badan);
    printf("Tuliskan berat badan : ");
    scanf("%f", &berat_badan);
    printf("Sudah vaksin (Y/N) : ");
    scanf("%s", str_sudah_vaksin);
    printf("Sudah vaksin (1/0) : ");
    scanf("%d", &sudah_vaksin2);

    if(!strcmp(str_sudah_vaksin, "Y") || !strcmp(str_sudah_vaksin, "y")) {
        sudah_vaksin = true;
    }else{
        sudah_vaksin = false;
    }

}