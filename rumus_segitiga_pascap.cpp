#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("KELOMPOK 3 \n\n");
    printf("Hari Mulyana \n");
    printf("Ikhsan M \n");
    printf("Rian A \n");
    printf("Riezkan A \n");
    printf("Sulthon Adam M \n\n"); 

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j>= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}