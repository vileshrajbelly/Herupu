#include<stdio.h>
float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
void main()
{
    float x,y,val;
    char op=0;
    printf("Enter two numbers\n");
    scanf("%f%f",&x,&y);
    printf("Enter the operation to be performed\n");
    scanf("%s", &op);
    switch(op)
    {
        case '+':
            val=add(x,y);
            break;
        case '-':
            val=sub(x,y);
            break;
        case '*':
            val=mul(x,y);
            break;
        case '/':
            val=div(x,y);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
    printf("Result is %f",val);
}
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}