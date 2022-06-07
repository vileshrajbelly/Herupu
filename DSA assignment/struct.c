#include <stdio.h>
struct student
{
    char name[10];
    float marks;
};
void main()
{
    struct student s1;
    printf("Vilesh 1BG19EE050\n");
    printf("Enter the detail of student\n");
    printf("Enter name=");
    scanf("%s", &s1.name);
    printf("Enter marks=");
    scanf("%f", &s1.marks);
    printf("The details of student are:\n");
    printf("Name=%s\n", s1.name);
    printf("Marks=%.1f\n", s1.marks);
}