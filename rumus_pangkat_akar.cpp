#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y, angka = 4, x = 5;
    float angkaDua = 3;

    printf("Menentukan rumus pangkat diatas \n\n");
    

    y = (x * x * x) - (angka * (x * x)) + angkaDua * x - angkaDua;

    printf("Hasil dari rumus diatas adalah :  %.2f", y);

}