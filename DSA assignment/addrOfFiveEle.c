#include <stdio.h>
void main()
{
    int a[5];
    int i;
    printf("Vilesh 1BG19EE050\n");
    for (i = 0; i < 5; i++)
    {
        printf("the address of element %d is: %d\n", i + 1, &a[i]);
    }
}