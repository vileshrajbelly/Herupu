#include <stdio.h>
union Job
{
    float salary;
    int Worker_no;
} u1;

void main()
{
    u1.salary = 77.5;
    printf("Vilesh 1BG19EE050\nSalary = %.1f\n", u1.salary);
    u1.Worker_no = 88;
    printf("Number of workers = %d", u1.Worker_no);
}