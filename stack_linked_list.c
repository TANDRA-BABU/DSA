#include <stdio.h>
#include <stdlib.h>

//Stucture to create a node with data and the next pointer

struct node
{
	int info;
	struct node *ptr;
}*top,*top1,*temp;

int count = 0;

// Push() operation on a stack
void push(int data)
{
	if(top == NULL)
	{
		top = (struct node *)malloc(1*sizeof(struct node));
		top->ptr = NULL;
		top->info = data;
	}
	else
	{
		temp = (struct node *)malloc(1*sizeof(struct node));
		temp->ptr = top;
		temp->info = data;
		top = temp;
	}
	count++;
	printf("NODE IS INSERTED\n\n");
}
int pop()
{
	top1 = top;
	if(top1 == NULL)
	{
		printf("\nSTACK  UNDERFLOW\n");
		return -1;
	}
	else
	{
		top1 = top1->ptr;
	}
		int popped = top->info;
		free(top);
		top = top1;
		count--;
		return popped;
}

void display()
{
	// Display the elements of the stack
	top1 = top;
	if(top1 == NULL)
	{
		printf("\nStack Underflow\n");
		return;
	}
	
	printf("The stack is \n");
	while(top1 != NULL)
	{
		printf("%d ---> ", top1->info);
		top1 = top1->ptr;
	}
	printf("NULL\n\n");
}

int main()
{
	int choice, value;
	top = NULL;
	printf("\nImplementation of stack using Linked List\n");
	while(1)
	{
		printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
		printf("\nEnter the choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1: 
				printf("\nEnter the value to insert: ");
				scanf("%d", &value);
				push(value);
				break;
			case 2:
				printf("Popped element is: %d\n", pop());
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nWrong Choice\n");
		}
	}
}
