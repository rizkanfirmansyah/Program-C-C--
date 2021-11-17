#include <stdio.h>
#include <stdlib.h>

int main(){
    const float phi = 3.14; 
    float r = 6;
    float v;

    printf("RUMUS MENGHITUNG LUAS BOLA \n\n\n");

    // v = 4 * phi * (r*r);  <- RUMUS LUAS BOLA
    v = (4/3) * phi * (r*r); 

    printf("Luas bola tersebut adalah = %f",v);
}