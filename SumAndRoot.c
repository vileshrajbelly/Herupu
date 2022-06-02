#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0,arr[5],i;
    float root[5];
    printf("Vilesh 1BG19EE050\n");
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        root[i]=sqrt(arr[i]);
    }
    printf("Sum of the array elements is %d\n",sum);
    printf("Square root of the array elements is\n");
    for(i=0;i<5;i++)
    {
        printf("%f\n",root[i]);
    }
}