#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Nasabah
{
    char *no_acc;
    char nama[25];
    char alamat[100];
    char kota[25];
    char no_telp[20];
    int umur;
};

int main()
{
    srand(time(0));
    FILE *file_replace;
    FILE *file_append;
    FILE *csv_append;
    FILE *csv_read;
    FILE *nasabah_append;
    FILE *nasabah_read;

    char *alamat_file1 = "/home/rizkan//IF Folder/Semester 1/Algoritma/Program C++/file_replace.txt";
    char *alamat_file2 = "/home/rizkan//IF Folder/Semester 1/Algoritma/Program C++/file_append.txt";
    char *alamat_file3 = "/home/rizkan//IF Folder/Semester 1/Algoritma/Program C++/file_append.csv";
    char *alamat_file4 = "/home/rizkan//IF Folder/Semester 1/Algoritma/Program C++/file_nasabah/csv";

    int bufferLength = 255;
    char buffer[bufferLength];
    int baris = 1;
    int baris2 = 1;

    //buat file baru &ditimpa
    file_replace = fopen(alamat_file1, "w");
    fprintf(file_replace, "Hai %d", rand());
    fclose(file_replace);
    printf("\n Data berhasil ditulis");

    //data baru ditambah ke file txt
    file_append = fopen(alamat_file2, "a");
    fprintf(file_append, "\n A %d,B %d,C %d,D %d,E %d,F %d", rand(), rand(), rand(), rand(), rand(), rand());
    fclose(file_append);
    printf("\n Data berhasil ditambahkan");

    csv_append = fopen(alamat_file3, "a");
    fprintf(csv_append, "\n %d,%d,%d,%d,%d,%d", rand(), rand(), rand(), rand(), rand(), rand());
    fclose(csv_append);
    printf("\n CSV berhasil ditambahkan");

    //data baru ditambah ke file csv
    csv_append = fopen(alamat_file3, "a");
    fprintf(csv_append, "\n %d,%d,%d,%d,%d,%d", rand(), rand(), rand(), rand(), rand(), rand());
    fclose(csv_append);
    printf("\n CSV berhasil ditambahkan");

    //baca file
    csv_read = fopen(alamat_file3, "r");
    printf("\n======================\n");
    printf("Baca File");
    printf("\n======================\n");
    while (fgets(buffer, bufferLength, csv_read))
    {
        printf("\nBaris ke-%d\n", baris);
        printf("%s", buffer);
        baris += 1;
    }
    fclose(csv_read);
    printf("\n\n\n");

    //input data nasabah
    struct Nasabah nas[100];
    int jumlah;

    printf("input data berapa kali: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++)
    {
        printf("\n\n");
        printf("-------------------------\n");
        printf("input nasabah ke-%d \n", i);
        printf("-------------------------\n");
        printf("No Account : ");
        scanf("%s", &nas[i].no_acc);
        printf("Nama : ");
        scanf("%s", &nas[i].nama);
        printf("Alamat : ");
        scanf("%s", &nas[i].alamat);
        printf("Kota : ");
        scanf("%s", &nas[i].kota);
        printf("No Telp : ");
        scanf("%s", &nas[i].no_telp);
        printf("Umur : ");
        scanf("%d", &nas[i].umur);
    }
    nasabah_append = fopen(alamat_file4, "a");
    for (int j = 1; j <= jumlah; j++)
    {
        fprintf(nasabah_append, "\n %s,%s,%s,%s,%s,%d",
                &nas[j].no_acc,
                &nas[j].nama,
                &nas[j].alamat,
                &nas[j].kota,
                &nas[j].no_telp,
                nas[j].umur);
    }
    fclose(nasabah_append);
    printf("\n\n\n");

    //baca file
    nasabah_read = fopen(alamat_file4, "r");
    printf("\n======================\n");
    printf("Baca File");
    printf("\n======================\n");
    while (fgets(buffer, bufferLength, nasabah_read))
    {
        printf("\nBaris ke-%d\n", baris2);
        printf("%s", buffer);
        baris2 += 1;
    }
    fclose(nasabah_read);
    printf("\n\n\n");
    return 0;
}