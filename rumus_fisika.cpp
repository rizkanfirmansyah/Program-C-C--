#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L, angkaDua = 2 ;
    float a = 12;
    float b = 13;
    float h = 5;

    printf("Mencari hasil dari rumus diatas : \n\n");

    L = ( a +b ) / angkaDua;
    L = L * h;

    printf("Hasil dari rumus diatas adalah : %.2f", L);

}