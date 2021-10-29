//Author : Sanjana Sawant

#include<stdio.h>
#include<process.h>
#include<stdlib.h>

#define MAX 10	//Maximum number of elements that can be stored

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
	int ch;

	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);

			default: printf("\nInvalid Choice!!\n");
		}
	}
}

void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full!!\n");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);

		printf("\nPushed element : %d \n",val);

		top++;
		stack[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!\n");
	}
	else
	{
		printf("\nPopped element: %d \n",stack[top]);
		top--;
	}
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty!!\n");
	}
	else
	{
		printf("\nStack is : \n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
