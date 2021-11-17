#include <stdio.h>
#include <string.h>

int main()
{
    int choice, type, market, itemPrice, qty, total, ppn;
    char task, authData, verifyData, database , report;
    char typeItem[50];
    char itemMarket[50];
    char itemName[50];
    char nama[50];
    char username[50] ;
    char  date[25] ;

    printf("==================SELAMAT DATANG DI APLIKASI SURVEY PANGAN==================\n\n");
    printf("Masukkan nama lengkap : ");
    fgets(nama, sizeof(nama), stdin);
    printf("Masukkan Username survey : ");
    fgets(username, sizeof(username), stdin);
    printf("Masukkan tanggal survey : ");
    fgets(date, sizeof(date), stdin);
    printf("Agendakan survey sekarang (Y/N) : ");
    scanf("%s", &task);
    if (task == 'Y' || task == 'y')
    {
        do
        {
            printf("\nPilih tipe barang survey : \n");
            printf("1. Sayuran  \n");
            printf("2. Daging \n");
            printf("3. Sembako  \n");
            printf("Masukkan jawaban anda : ");
            scanf("%d", &type);

            if (type == 1)
                strcpy(typeItem, "Sayuran");
            else if (type == 2)
                strcpy(typeItem, "Daging");
            else if (type == 3)
                strcpy(typeItem, "Sembako");

            printf("\nPilih pasar barang survey : \n");
            printf("1. Gambir  \n");
            printf("2. Gedebage \n");
            printf("3. Cimahi  \n");
            printf("Masukkan jawaban anda : ");
            scanf("%d", &market);

            if (market == 1)
                strcpy(itemMarket, "Gambir");
            else if (market == 2)
                strcpy(itemMarket, "Gedebage");
            else if (market == 3)
                strcpy(itemMarket, "Cimahi");

            printf("\nMasukkan nama barang survey : ");
            scanf("%s", itemName);
            printf("Masukkan harga barang survey : ");
            scanf("%d", &itemPrice);
            printf("Masukkan kuantiti barang survey : ");
            scanf("%d", &qty);

            total = qty * itemPrice;
            ppn = total * 100 / 10;

            printf("\nApakah data sudah benar (Y/N) : ");
            scanf("%s", &authData);
            printf("Verifikasi data (Y/N) : ");
            scanf("%s", &verifyData);

        } while (authData == 'N' || verifyData == 'N' || authData == 'n' || verifyData == 'n');

        printf("Loading..... \n");
        printf("Laporan survey selesai :) \n");
        printf("Apakah anda ingin mencetak laporan (Y/N)");
        scanf("%s", &report);
        if (report == 'Y' || report == 'y')
        {
            printf("\n\n====================================LAPORAN HASIL SURVEY PANGAN====================================\n\n");
            printf("Nama Lengkap        : %s", nama);
            printf("Tanggal Survey      : %s", date);
            printf("Pasar Survey        : %s \n", itemMarket);
            printf("Tipe Barang         : %s \n", typeItem);
            printf("Nama Barang         : %s \n", itemName);
            printf("Harga Barang        : %d \n", itemPrice);
            printf("Kuantiti Barang     : %d \n", qty);
            printf("PPN Barang          : %d \n", qty);
            printf("Created by ..... @%s", username);
        }

        printf("\n\nApakah kamu ingin melihat data survey (Y/N) ");
        scanf("%s", &database);

        if(database == 'y' || database == 'Y'){
            printf("\n\n====================================DATABASE HASIL SURVEY PANGAN====================================\n");
            printf("NO  |       Nama Barang              Harga Barang            Tipe Barang        \n");
            printf("1   |           Kornet                 13000                    Daging         \n");
            printf("2   |           Telur                  16000                    Daging        \n");
            printf("3   |           Salad                  5000                    Sayuran        \n");
            printf("4   |           Beras                 14500                   Sembako         \n");
            printf("5   |           %s         ", itemName);
            printf("         %d               ", itemPrice);
            printf("   %s           \n", typeItem);
            printf("====================================DATABASE HASIL SURVEY PANGAN====================================\n");
        }

    }

    printf("\n\n\n");
    printf("Terima kasih telah mengisi survey, Sampai jumpa");
}