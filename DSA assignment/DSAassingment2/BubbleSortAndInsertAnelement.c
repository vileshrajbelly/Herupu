#include <stdio.h>
void main()
{
    printf("Vilesh 1BG19EE050\n");
    int a[10] = {2, 3, 8, 5, 1, 9, 0, 4, 7}, i, j, n = 9, swap;
    // sorting
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("sorted array\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    for (i = 9; i > 5; i--)
    {
        a[i + 1] = a[i];
    }
    a[6] = 6;
    printf("\nsinserted array\n");
    n++;
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}