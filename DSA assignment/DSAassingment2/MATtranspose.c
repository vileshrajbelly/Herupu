//mat transpose
#include <stdio.h>
void main()
{
    printf("Vilesh 1BG19EE050\n");
    int A[5][5], B[5][5], i, j, r1, c1;
    printf("enter the number of rows of  mat:");
    scanf("%d", &r1);
    printf("\nenter the number of column of mat:");
    scanf("%d", &c1);
    printf("enter the elements of mat\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
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
    printf("\n");
    printf("\n");
    printf("A'=\n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
}