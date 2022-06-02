#include <stdio.h>
union Job
{
    float salary;
    int Worker_no;
} u1;

void main()
{
    u1.salary = 52.6;
    printf("Vilesh 1BG19EE050 \nSalary = %.1f\n", u1.salary);
    u1.Worker_no = 50;
    printf("Number of workers = %d", u1.Worker_no);
}