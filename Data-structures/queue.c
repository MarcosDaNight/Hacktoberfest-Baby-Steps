//Author: Sanjana Sawant

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void insert();
void pop();
void display();

int q[MAX];
int rear=0, front=0;

//Insert element to the rear end of the queue
void insert()
{
   int data;
   if (rear == MAX)
   {
       printf("\nQueue is FULL !! \n");
       return;
   }
   else
   {
       printf("\nEnter data : ");
       scanf("%d",&data);
       q[rear] = data;
       rear++;
       printf("\nData inserted in queue is %d",data);
   }
}

//Pop the first element
void pop()
{
    if (front == rear)
    {
        printf("\nEmpty queue !!");
        return;
    }
    else
    {
        printf("\nPopped item from the queue is %d", q[front]);
        front++;
    }
}

//Display the entire queue
void display()
{
    if (rear == front)
    {
        printf("\nEmpty Queue ");
        return;
    }
    else
    {
        printf("\nElements of the list are : \n");
        for (int  i=front; i<rear; i++)
        {
            printf("%d \n",q[i]);
        }
    }
}

//menu for selecting function to be performed on the queue
int menu()
{
    int ch;
    printf("\n\n-----------**********-------------\n");
    printf("\n 1. Insert ");
    printf("\n 2. Pop ");
    printf("\n 3. Display");
    printf("\n 4. Exit ");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

int main()
{
    int ch;
    printf("Program to implement Linear Queue using array \n\n\n");
    do
    {
        ch = menu();
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default : printf("\nInvalid Choice !!!");
        }
   } while(1);
}
