#include <stdio.h>
#include <stdlib.h>

struct node *create(struct node *, struct node **, int);
void display(struct node *);
void displays(struct node *, struct node *);

struct node
{
    int data;
    struct node *rptr, *lptr;
};

int main()
{
    struct node *head, *tail;
    head = NULL;
    tail = NULL;
    int i, n, value;
    printf("vilesh 1BG19EE050\n");
    printf("\nEnter the number of values u want to enter\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the number you want to enter\n");
        scanf("%d", &value);
        head = create(head, &tail, value);
    }

    printf("\nThe data in forward direction is printed below\n");
    display(head);

    printf("\nThe data in backward direction is printed below\n");
    displays(tail, head);
}

struct node *create(struct node *head1, struct node **tail1, int dat)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = dat;
    newnode->rptr = newnode->lptr = NULL;

    if (head1 == NULL)
    {
        newnode->lptr = newnode->rptr = NULL;
        head1 = newnode;
    }

    temp = head1;
    while (temp->rptr != NULL)
        temp = temp->rptr;

    temp->rptr = newnode;
    newnode->lptr = temp;
    newnode->rptr = NULL;
    *tail1 = newnode;
    temp = temp->rptr;

    return head1;
}

void display(struct node *head)

{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->rptr;
    }
}

void displays(struct node *tail, struct node *head)
{
    while (tail != head)
    {
        printf("%d\n", tail->data);
        tail = tail->lptr;
    }

    if (tail == head)
        printf("%d\n", tail->data);
}