#include <stdio.h>
#include <stdlib.h>

int main(){
    bool is_success = false;
    printf("is_success : %d\n", is_success);

    if(is_success){
        printf("hasilnya sukses");
    }else{
        printf("hasilnya gagal!");
    }

    printf("\n\n");

      int nilai = 69;
    printf("nilai : %d\n", nilai);

    if (nilai >= 95) {
        printf("indeks A");
    } else if (nilai >= 80){
        printf("indeks B");
    } else if (nilai >= 70){
        printf("indeks B-");
    } else if (nilai >= 75){
        printf("indeks c");
    } else if (nilai >= 70){
        printf("indeks C-");
    } else if (nilai >= 60){
        printf("indeks D");
    } else if (nilai >= 40){
        printf("indeks E");
    } else {
        printf("indeks tidak diketahui");
    }
}