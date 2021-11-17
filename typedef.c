#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int tahun, bulan, tanggal;
};

struct Nasabah {
    char no_acc[14];
    char nama[25];
    char alamat[100];
    char kota[25];
    char no_telp[20];
    int umur;
    struct Date det;
};

int main(){
    struct Nasabah n1, n2;
    struct Nasabah n3;

    strcpy(n1.no_acc, "000123456");
    strcpy(n1.nama, "Rizkan");
    strcpy(n1.alamat, "Soreang");
    strcpy(n1.kota, "Kab Bandung");
    strcpy(n1.no_telp, "089xxx");
    n1.umur = 19;
    n1.det.tanggal = 21;
    n1.det.tahun = 2001;
    n1.det.bulan = 10;

    strcpy(n2.no_acc, "22334455");
    strcpy(n2.nama, "Firmansyah");
    strcpy(n2.alamat, "Soekarno Hatta");
    strcpy(n2.kota, "Kota Bandung");
    strcpy(n2.no_telp, "083199211");
    n2.umur = 20;

    strcpy(n3.no_acc, "23090402");
    strcpy(n3.nama, "April");
    strcpy(n3.alamat, "Soekarno Hatta");
    strcpy(n3.kota, "Kota Bandung");
    strcpy(n3.no_telp, "89837483888");
    n3.umur = 20;

    printf("Nasabah 1 \n");
    printf("Nomor Account : %s  \n", n1.no_acc);
    printf("Nama : %s  \n", n1.nama);
    printf("Alamat : %s  \n", n1.alamat);
    printf("Kota : %s  \n", n1.kota);
    printf("No Telepon : %s  \n", n1.no_telp);
    printf("Umur : %d  \n", n1.umur);
    printf("Tanggal Lahir : %d-%d-%d \n\n", n1.det.tanggal, n1.det.bulan, n1.det.tahun);

    printf("Nasabah 2 \n");
    printf("Nomor Account : %s  \n", n2.no_acc);
    printf("Nama : %s  \n", n2.nama);
    printf("Alamat : %s  \n", n2.alamat);
    printf("Kota : %s  \n", n2.kota);
    printf("No Telepon : %s  \n", n2.no_telp);
    printf("Umur : %d  \n\n\n", n2.umur);

    printf("Nasabah 3 \n");
    printf("Nomor Account : %s  \n", n3.no_acc);
    printf("Nama : %s  \n", n3.nama);
    printf("Alamat : %s  \n", n3.alamat);
    printf("Kota : %s  \n", n3.kota);
    printf("No Telepon : %s  \n", n3.no_telp);
    printf("Umur : %d  \n", n3.umur);

    struct Date tgl1;

    tgl1.tahun = 2021;
    tgl1.bulan = 11;
    tgl1.tanggal = 31;

    printf("\n\n\nTanggal : %d-%d-%d \n\n", tgl1.tanggal, tgl1.bulan, tgl1.tahun);

    return 0;

}