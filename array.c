#include <stdio.h>
#include <stdlib.h>
#define SIZE (3)

int main(){
    
    // array int
    int deret1[10] = {10, 11, 12,13};
    printf("%d \n", deret1[0]);
    printf("%d \n", deret1[1]);
    printf("%d \n", deret1[2]);
    printf("%d \n", deret1[3]);
    printf("\n\n");

    int deret2[] = {20, 21, 22, 23};
    printf("%d \n", deret2[0]);
    printf("%d \n", deret2[1]);
    printf("%d \n", deret2[2]);
    printf("%d \n", deret2[3]);
    printf("\n\n");

    float deret3[4];
    deret3[0] = 30.1;
    deret3[1] = 30.2;
    deret3[2] = 30.3;
    deret3[3] = 30.4;
    printf("%.2f \n", deret3[0]);
    printf("%.2f \n", deret3[1]);
    printf("%.2f \n", deret3[2]);
    printf("%.2f \n", deret3[3]);
    printf("\n\n");

        char kata1[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    printf("%c \n", kata1[0]);
    printf("%c \n", kata1[2]);
    printf("%c \n", kata1[4]);
    printf("%c \n", kata1[6]);
    printf("%s \n", kata1);
    printf("\n\n");

    char kata2[20] = {'i', 'n', 'i', ' ', 'a', 'd', 'a', 'l', 'a', 'h', ' ', 'k', 'a', 't', 'a'};
    printf("%c \n", kata2[0]);
    printf("%c \n", kata2[1]);
    printf("%c \n", kata2[2]);
    printf("%c \n", kata2[3]);
    printf("%s \n", kata2);
    printf("\n\n");

    char kata3[20];
    kata3[0] = 'i';
    kata3[1] = 'n';
    kata3[2] = 'i';
    kata3[3] = ' ';
    printf("%s \n", kata3);
    printf("\n\n");

        //tipe data buatan
    printf("============================= \n");
    printf("Tipe Data Buatan \n");
    printf("====================================\n");
    struct nasabah
    {
        char *nama;
        int umur;
    };
    struct nasabah nas[2];
    nas[0].nama = 'A';
    nas[0].umur = 12;
    nas[1].nama = 'B';
    nas[1].umur = 14;
    printf("%c - %d\n", nas[0].nama, nas[0].umur);
    printf("%c - %d\n", nas[1].nama, nas[1].umur);
    printf("\n\n");

    //mean, median, min, max
    printf("============================= \n");
    printf("Mean, Median, Min, Max \n");
    printf("============================= \n\n");
    unsigned char test [SIZE] = {};
    for(int i=0; i<SIZE; i++) {
        test[i] = rand() % 90;
    }
    for(int j=0; j<SIZE; j++) {
        printf("%d \n", test[j]);
    }
    printf("============================= \n");
    printf("\n\n");


}