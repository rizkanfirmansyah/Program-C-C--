#include <stdio.h>
#include <stdlib.h>

int main()
{
    bool is_success = false;
    printf("is_success : %d\n", is_success);

    if (is_success)
    {
        printf("hasilnya sukses");
    }
    else
    {
        printf("hasilnya gagal!");
    }

    printf("\n\n");

    int nilai = 69;
    printf("nilai : %d\n", nilai);

    if (nilai >= 95)
    {
        printf("indeks A");
    }
    else if (nilai >= 80)
    {
        printf("indeks B");
    }
    else if (nilai >= 70)
    {
        printf("indeks B-");
    }
    else if (nilai >= 75)
    {
        printf("indeks c");
    }
    else if (nilai >= 70)
    {
        printf("indeks C-");
    }
    else if (nilai >= 60)
    {
        printf("indeks D");
    }
    else if (nilai >= 40)
    {
        printf("indeks E");
    }
    else
    {
        printf("indeks tidak diketahui");
    }

    printf("\n\n");

    int bilangan = 89;
    printf("bilangan : %d\n", bilangan);

    if (bilangan % 2 == 0)
    {
        printf("bilangan genap");
    }
    else if (bilangan % 2 == 1)
    {
        printf("bilangan ganjil");
    }
    else
    {
        printf("harusnya gak pernah muncul ini");
    }

    printf("\n\n");

    char lampu[10] = "MERAH";
    printf("warna lampu : %s\n", lampu);
    if (lampu == "Hijau" || lampu == "HIJAU")
    {
        printf("Kendaraan maju");
    }
    else if (lampu == "Merah" || lampu == "MERAH")
    {
        printf("Kendaraan berhenti");
    }
    else if (lampu == "Kuning" || lampu == "KUNING")
    {
        printf("Kendaraan bersiap-siap");
    }
    else
    {
        printf("Tunggu petugas datang");
    }
    printf("\n\n");
}