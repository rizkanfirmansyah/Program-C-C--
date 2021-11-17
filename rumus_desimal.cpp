#include <stdio.h>
#include <stdlib.h>

int main(){
    double x;
    double a = 3;
    double b = 4;
    double c = 8;
    double angkaSatu = 2;
    double angkaDua = 4;
    double angkaPembagi = 2;

    printf("RUMUS MENGHITUNG \n\n\n");

    x = b * (-1) + angkaSatu * ( c * c ) + angkaDua * ( a * b) ;
    x = x / angkaPembagi * c; 

    printf("Nilai dari rumus diatas adalah  = %.2f",x);
}