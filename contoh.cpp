#include <stdio.h>

int main()
{
    int choice;
    char name[50], email[50];

    printf("SELAMAT DATANG DI APLIKASI SURVEY PANGAN \n\n");
    printf("Silahkan pilih menu dibawah ini : \n");
    printf("1. Isi Survey \n");
    printf("2. Lainnya : \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Nama: ");
        fgets(name, sizeof(name), stdin);

        printf("Email: ");
        fgets(email, sizeof(email), stdin);

        printf("\n-------------------------\n");
        printf("Nama anda: %s", name);
        printf("Alamat email: %s", email);

        // return 0;
    }
}