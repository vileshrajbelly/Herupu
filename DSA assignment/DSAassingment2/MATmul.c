#include <stdio.h>
void main()
{
    printf("Vilesh 1BG19EE050\n");
    int A[5][5], B[5][5], AB[5][5], i, j, k, r1, r2, c1, c2;
    printf("enter the number of rows of 1st mat:");
    scanf_s("%d", &r1);
    printf("\nenter the number of column of 1st mat:");
    scanf_s("%d", &c1);
    printf("\nenter the number of rows of 2nd mat:");
    scanf_s("%d", &r2);
    printf("\nenter the number of column of 2nd mat:");
    scanf_s("%d", &c2);
    while (c1 != r2)
    {
        printf("error");
        printf("enter the number of rows of 1st mat:");
        scanf_s("%d", &r1);
        printf("\nenter the number of column of 1st mat:");
        scanf_s("%d", &c1);
        printf("\nenter the number of rows of 2nd mat:");
        scanf_s("%d", &r2);
        printf("\nenter the number of column of 2nd mat:");
        scanf_s("%d", &c2);
    }
    printf("enter the elements of 1st mat\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf_s("%d", &A[i][j]);
        }
    }

    printf("enter the elements of 2nd mat\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf_s("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            AB[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("A=\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("B=\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("A*B=\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", AB[i][j]);
        }
        printf("\n");
    }
    getchar();
}