#include <stdio.h>
void main()
{
    int r, i, r1, i1;
    printf("\tVilesh 1BG19EE050\nEnter the real part of first complex number\n");
    scanf("%d", &r);
    printf("Enter the imaginary part of first complex number\n");
    scanf("%d", &i);
    printf("Enter the real part of second complex number\n");
    scanf("%d", &r1);
    printf("Enter the imaginary part of second complex number\n");
    scanf("%d", &i1);
    printf("The sum of two complex number is\n");
    printf("%d+%di\n", r + r1, i + i1);
}