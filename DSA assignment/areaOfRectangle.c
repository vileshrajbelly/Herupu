#include<stdio.h>
int Area_Of_Rec(int l,int b)
{
    int area;
    area=l*b;
    return area;
}
int main()
{
    int l,b;
    printf("Vilesh 1BG19EE050\n");
    printf("Enter the length of rectangle\n");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle\n");
    scanf("%d",&b);
    printf("The area of rectangle is %d\n",Area_Of_Rec(l,b));
    return 0;
}