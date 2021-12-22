#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    FILE *file_replace;
    FILE *file_append;
    //FILE *csv_append;
    //FILE *file_read;

    char *alamat_file1 = "/home/rizkan//IF Folder/Semester 1/Algoritma/Program C++/file_replace.txt";
    char *alamat_file2 = "/home/rizkan//IF Folder/Semester 1/Algoritma/Program C++/file_append.txt";
    //char *alamat_file3 = "E:\\Tugas Sekolah\\Algorithm & Programming\\Pertemuan 13\\file_append.csv";
    //char *alamat_file4 = "E:\\Tugas Sekolah\\Algorithm & Programming\\Pertemuan 13\\file_nasabah/csv";

    //int bufferLength = 255;
    //char buffer[bufferLength];
    //int z = 1;

    //buat file baru &ditimpa
    file_replace = fopen (alamat_file1, "w");
    fprintf(file_replace, "Hai %d", rand());
    fclose(file_replace);
    printf("\n Data berhasil ditulis");

    //data baru ditambah ke file txt
    file_append = fopen(alamat_file2, "a");
    fprintf(file_append, "\n A %d,B %d,C %d,D %d,E %d,F %d", rand(),rand(),rand(),rand(),rand(),rand());
    fclose(file_append);
    printf("\n Data berhasil ditambahkan");
}