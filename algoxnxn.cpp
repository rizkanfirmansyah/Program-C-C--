#include <stdio.h>

int main()
{
    int row, column, C; float L;

    row = 1;
    while (row <= 4)
    {
        column = 1;
        while (column <= 7)
        {
            if (column % 2 != 0)
            {
                printf("X");
            }
            else
            {
                L = 7 % 2;
                printf("N");
                printf("%f", L);
            }
            column++;
        }
        row++;
            printf("\n");
    }

    C = 1;
        while (C <= 4)
        {
                C = C + 2 * 4 % 2;
                printf("%d", C);
                printf("\n");
            if (C + 2 * 4 % 2 == 0)
            {
                printf("ayam");
            }
            else
            {
                printf("BEBEK");
            }
            C++;
            printf("\n");
        }
}