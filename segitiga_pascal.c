#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    for (int a = 1; a < 5; a++)
    {
        for (int b = b = 1; b < a; b++)
        {
            printf(" ");
        }
        for (int c = a; c <= 5; c++)
        {
            printf("%d", c);
        }
        printf("\n");
    }
    for (int d = 5; d >= 1; d--)
    {
        for (int e = 1; e < d; e++)
        {
            printf(" ");
        }
        for (int f = d; f <= 5; f++)
        {
            printf("%d", f);
        }
        printf("\n");
    }
    return 0;
}