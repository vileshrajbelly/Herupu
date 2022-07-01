#include <stdio.h>
#include <stdlib.h>
struct node
{
    int INFO;
    struct node *NEXT;
};
struct node *FIRST = NULL;
struct node *LAST = NULL;
/*Declaring function prototypes for linked list operations*/
void insert(int);
int delete (int);
void print(void);
struct node *search(int);
void main()
{
    int num1, num2, choice;
    struct node *location;
    printf("Vilesh 1BG19EE050\n");
    while (1)
    {
        printf("\n select an option");
        printf("\n1-insert ");
        printf("\n2-delete ");
        printf("\n3-print ");
        printf("\n enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nEnter the element to be inserted into the linked list:");
            scanf("%d", &num1);
            insert(num1); /*Calling the insert() function*/
            printf("\n%d successfully inserted into the linked list!", num1);
            break;
        }
        case 2:
        {
            printf("\nEnter the element to be deleted from the linked list:");
            scanf("%d", &num1);
            num2 = delete (num1); /*Calling the delete() function */
            if (num2 == -9999)
                printf("\n\t %d is not present in the linked list\n\t", num1);
            else
                printf("\n\tElement %d successfuly deleted from the linked list\n\t", num2);

            break;
        }
        case 3:
        {
            print(); /*Printing the linked list elements*/

            break;
        }

        default:
        {
            printf("\nIncorrect choice , please try again");

            break;
        }
        }
    }
}
/*Insert function*/
void insert(int value)
{
    /*Creating a new node*/
    struct node *PTR = (struct node *)malloc(sizeof(struct node));
    /*Storing the element to be inserted in the new node*/
    PTR->INFO = value;
    /*Linking the new node to the linked list*/
    if (FIRST == NULL)
    {
        FIRST = LAST = PTR;
        PTR->NEXT = NULL;
    }
    else
    {
        LAST->NEXT = PTR;
        PTR->NEXT = NULL;
        LAST = PTR;
    }
}
/*Delete function*/
int delete (int value)
{
    struct node *LOC, *TEMP;
    int i;
    i = value;
    LOC = search(i); /*Calling the search() function*/
    if (LOC == NULL) /*Element not found*/
        return (-9999);
    if (LOC == FIRST)
    {
        if (FIRST == LAST)
            FIRST = LAST = NULL;
        else
            FIRST = FIRST->NEXT;
        return (value);
    }
    for (TEMP = FIRST; TEMP->NEXT != LOC; TEMP = TEMP->NEXT)
        ;
    TEMP->NEXT = LOC->NEXT;
    if (LOC == LAST)
        LAST = TEMP;
    return (LOC->INFO);
}
/*Search function*/
struct node *search(int value)
{
    struct node *PTR;
    if (FIRST == NULL) /*Checking for empty list*/
        return (NULL);
    /*Searching the linked list*/
    for (PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
        if (PTR->INFO == value)
            return (PTR); /*Returning the location of the searched element*/
    if (LAST->INFO == value)
        return (LAST);
    else
        return (NULL); /*Returning NULL value indicating unsuccessful search*/
}
/*print function*/
void print()
{
    struct node *PTR;
    if (FIRST == NULL) /*Checking whether the list is empty*/
    {
        printf("\nEmpty list");
        return;
    }
    printf("\nLinked list elements:");
    if (FIRST == LAST) /*Checking if there is only one element in the list*/
    {
        printf("\t%d", FIRST->INFO);
        return;
    }
    /*Printing the list elements*/
    for (PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
        printf("\t%d", PTR->INFO);
    printf("\t%d", LAST->INFO);
}