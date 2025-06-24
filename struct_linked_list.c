// linked list implementation in C

#include<stdio.h>
#include<stdlib.h>

// Creating a node

struct node
{
	int value;
	struct node *next;
};

// print the linked list value
void print(struct node *p)
{
	while(p != NULL)
	{
		printf("%d ", p->value);
		p = p->next;
	}
}

int main()
{
	// Initialize nodes
	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;

	// Allocate memory
	one = (struct node *)malloc(sizeof(struct node));
	two = (struct node *)malloc(sizeof(struct node));
	three = (struct node *)malloc(sizeof(struct node));
	
	// Assign value values
	one->value = 1;
	two->value = 2;
	three->value = 3;

	// Connect nodes
	one->next = two;
	two->next = three;
	three->next = NULL;

	// printing node-value
	head = one;
	print(head);
}

