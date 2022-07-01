#include <stdio.h>
#include <stdlib.h>
int stack[100]; /*Declaring a 100 element stack array*/
int top = -1;   /*Declaring and initializing the stack pointer*/
void push(int);
int pop();      /*Declaring a function prototype for removing an element from the stack*/
void display(); /*Declaring a function prototype for displaying the elements of a stack*/
void main()
{
    int choice;
    int num1 = 0, num2 = 0;
    while (1)
    {

        /*Creating an interactive interface for performing stack operations*/
        printf("Select a choice from the following:");
        printf("\n[1] Push an element into the stack");
        printf("\n[2] Pop out an element from the stack");
        printf("\n[3] Display the stack elements");
        printf("\n[4] Exit\n");
        printf("\n\tYour choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\n\tEnter the element to be pushed into the stack:");
            scanf("%d", &num1);
            push(num1); /*Inserting an element*/
            break;
        }
        case 2:
        {
            num2 = pop(); /*Removing an element*/
            printf("\n\t%d element popped out of the stack\n\t", num2);

            break;
        }
        case 3:
        {
            display(); /*Displaying stack elements*/

            break;
        }
        case 4:
            exit(1);
            break;
        default:
            printf("\nInvalid choice!\n");
            break;
        }
    }
}
/*Push function*/
void push(int element)
{
    if (top == 99) /*Checking whether the stack is full*/
    {
        printf("Stack is Full.\n");

        exit(1);
    }
    top = top + 1;        /*Incrementing stack pointer*/
    stack[top] = element; /*Inserting the new element*/
}
/*Pop function*/
int pop()
{
    if (top == -1) /*Checking whether the stack is empty*/
    {
        printf("\n\tStack is Empty.\n");

        exit(1);
    }
    return (stack[top--]); /*Returning the top element and decrementing the
    stack pointer*/
}
void display()
{
    int i;
    printf("\t\nThe various stack elements are:\n");
    for (i = top; i >= 0; i--)
        printf("\t%d\n", stack[i]); /*Printing stack elements*/
}
