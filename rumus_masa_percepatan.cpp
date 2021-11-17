#include <stdio.h>
#include <stdlib.h>

int main(){
    float f;
    float m = 6;
    float a = 6;
    float w = 12;
    float g = 2;
    float v = 12;
    float t = 2;

    printf("RUMUS MENGHITUNG MASA DAN PERCEPATAN Versi 1 \n\n\n");

    f = m * a;

    printf("Hasil dari rumus versi 1 = %.2f \n\n",f);

    printf("RUMUS MENGHITUNG MASA DAN PERCEPATAN Versi 2 \n\n\n");

    f = ( w / g ) * ( v / t );

    printf("Hasil dari rumus versi 2 = %.2f",f);
}