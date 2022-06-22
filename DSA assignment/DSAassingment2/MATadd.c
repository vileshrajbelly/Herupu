#include <stdio.h>
// transpose of a matrix
void main()
{
    printf("Vilesh 1BG19EE050\n");
    int A[5][5], B[5][5], ApB[5][5], i, j, k, r1, r2, c1, c2;
    printf("enter the number of rows of 1st mat:");
    scanf("%d", &r1);
    printf("\nenter the number of column of 1st mat:");
    scanf("%d", &c1);
    printf("\nenter the number of rows of 2nd mat:");
    scanf("%d", &r2);
    printf("\nenter the number of column of 2nd mat:");
    scanf("%d", &c2);
    while (!(c1 == c2 && r1 == r2))
    {
        printf("error\n");
        printf("enter the number of rows of 1st mat:");
        scanf("%d", &r1);
        printf("\nenter the number of column of 1st mat:");
        scanf("%d", &c1);
        printf("\nenter the number of rows of 2nd mat:");
        scanf("%d", &r2);
        printf("\nenter the number of column of 2nd mat:");
        scanf("%d", &c2);
    }
    //mat addition
    printf("enter the elements of 1st mat\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the elements of 2nd mat\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            ApB[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("A+B=\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", ApB[i][j]);
        }
        printf("\n");
    }
}