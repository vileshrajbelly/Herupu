// C code to implement Priority Queue
// using Linked List
#include <stdio.h>
#include <stdlib.h>

// Node
typedef struct node
{
	int data;

	// Lower values indicate higher priority
	int priority;

	struct node *next;

} Node;

// Function to Create A New Node
Node *newNode(int d, int p)
{
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = d;
	temp->priority = p;
	temp->next = NULL;

	return temp;
}

// Return the value at head
int peek(Node **head)
{
	return (*head)->data;
}

// Removes the element with the
// highest priority form the list
void pop(Node **head)
{
	Node *temp = *head;
	(*head) = (*head)->next;
	free(temp);
}

// Function to push according to priority
void push(Node **head, int d, int p)
{
	Node *start = (*head);

	// Create new Node
	Node *temp = newNode(d, p);

	// Special Case: The head of list has lesser
	// priority than new node. So insert new
	// node before head node and change head node.
	if ((*head)->priority > p)
	{

		// Insert New Node before head
		temp->next = *head;
		(*head) = temp;
	}
	else
	{

		// Traverse the list and find a
		// position to insert new node
		while (start->next != NULL &&
				 start->next->priority < p)
		{
			start = start->next;
		}

		// Either at the ends of the list
		// or at required position
		temp->next = start->next;
		start->next = temp;
	}
}

// Function to check is list is empty
int isEmpty(Node **head)
{
	return (*head) == NULL;
}

// Driver code
int main()
{
	// Create a Priority Queue
	// 7->4->5->6
	Node *pq = newNode(4, 1);
	do
	{
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Peek");
		printf("\n4. Display");
		printf("\n5. Exit");
		printf("\nEnter your choice: ");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter data: ");
			int data;
			scanf("%d", &data);
			printf("\nEnter priority: ");
			int priority;
			scanf("%d", &priority);
			push(&pq, data, priority);
			break;
		case 2:
			if (isEmpty(&pq))
				printf("\nQueue is empty");
			else
				printf("\nPopped element is %d", peek(&pq));
			pop(&pq);
			break;
		case 3:
			if (isEmpty(&pq))
				printf("\nQueue is empty");
			else
				printf("\nPeeked element is %d", peek(&pq));
			break;
		case 4:
			if (isEmpty(&pq))
				printf("\nQueue is empty");
			else
			{
				Node *temp = pq;
				printf("\nElements in a Queue are :");
				while (temp != NULL)
				{
					printf("%d,", temp->data);
					temp = temp->next;
				}
			}
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("\nInvalid choice");
		}
	}while (1);
}