#include <stdio.h>
#include <stdlib.h>

struct node
{
    int INFO;
    struct node *NEXT;
};
struct node *FIRST = NULL;
struct node *LAST = NULL;

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
        printf("\nselect an option:\n");
        printf("\n1-insert");
        printf("\n2-delete");
        printf("\n3-search");
        printf("\n4-print");
        printf("\n5-exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                printf("\nEnter the element to be inserted into the linked list:");
                scanf("%d", &num1);
                insert(num1);
                printf("\n%d successfully inserted into the linked list!", num1);
                break;
            }
            case 2:
            {
                printf("\nEnter the element to be deleted from the linked list:");
                scanf("%d", &num1);
                num2 = delete (num1);
                if (num2 == -9999)
                    printf("\n\t %d is not present in the linked list\n\t", num1);
                else
                    printf("\n\tElement %d successfuly deleted from the linked list\n\t", num2);
                break;
            }
            case 3:
            {
                printf("\nEnter the element to be searched:\t");
                scanf("%d", &num1);
                location = search(num1);
                if (location == NULL)
                    printf("\n\t %d is not present in the linked list", num1);
                else
                {
                    if (location == LAST)
                        printf("\n\t %d is the last element of the linked list", num1);
                    else
                        printf("\n\tElement %d is present before element %d in the linked list\n\t", num1, (location->NEXT)->INFO);
                }
                break;
            }
            case 4:
            {
                print();
                break;
            }
            case 5:
            {
                exit(1);
                break;
            }
            default:
            {
                printf("\nincorrect choice , please try again");
                break;
            }
        }
    }
}

void insert(int value)
{
    struct node *PTR = (struct node *)malloc(sizeof(struct node));
    PTR->INFO = value;
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

int delete (int value)
{
    struct node *LOC, *TEMP;
    int i;
    i = value;
    LOC = search(i);
    if (LOC == NULL)
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

void print()
{
    struct node *PTR;
    if (FIRST == NULL) /*Checking whether the list is empty*/
    {
        printf("\nempty list\n");
        return;
    }
    printf("linked list elements:");
    if (FIRST == LAST) /*Checking if there is only one element in the list*/
    {
        printf("\t %d", FIRST->INFO);
        return;
    }
    for (PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
        printf("\t%d", PTR->INFO);
    printf("\t%d", LAST->INFO);
}