#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("======================= \n");
    printf("Looping Pemograman C++ \n");
    printf("======================= \n");

    int i;
    for(i=1; i<=9;i++){
        printf("%d ", i);
    }

    printf("\n\n");

    int j;
    for(j=9; j>=0;j--){
        printf("%d ", j);
    }

    printf("\n\n");

    char j2;
    for(j2='j'; j2>='a';j2-=2){
        printf("%c ", j2);
    }

    printf("\n\n");
    printf("\n\n");


    // while do
    printf("==========\n");
    printf("while do \n");
    printf("==========\n");

    int angka=2;
    int pangkat = 5;
    int hasil = 1;
    int k = 1;
    while(k<=pangkat) {
        hasil = hasil * angka;
        printf("%d pangkat %d = %d \n", angka, k, hasil);
        k = k + 1;
    }
    printf("\n\n");

    int L1 = 50;
    while (L1>=10) {
        printf("%d ", L1);
        L1 = L1-2;
    }
    printf("\n\n");

    int L2 = 50;
    while(L2>=10) {
        if (L2 % 2 == 0) {
            printf("%d ", L2);
        }
        L2 = L2 - 1;
    }
    printf("\n\n");
    printf("\n\n");

    // aritmatika
    printf("=================\n");
    printf("ARITMATIKA\n");
    printf("=================\n");

    printf("Diketahui deret aritmatika \n");
    printf("n1 = 3\n");
    printf("n1 = 7\n");
    printf("n1 = 11\n");
    printf("\n\n");
    printf("jarak n1 & n2 = 4\n");
    printf("temukan angka n10 \n\n");
    int n1= 3 ;
    int n2 = 7;
    int b = n2-n1;
    int n = 100;
    int jumlah  = 0 ;
    for(int x=1; x<=n; x++){
        int nx = n1+((x-1) * b);
        jumlah = jumlah + nx;
        printf("n%d = %d \n", x, nx);
    }

    printf("Jumlah deret angkanya adalah %d \n", jumlah);

}