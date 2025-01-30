#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
int front=0,rear=-1,n,i;
char str[10][20];
void enqueue();
void dequeue();
int isFull();
int isEmpty();
void display();
void main()
{
int ch;
printf("Enter no of patients to be entered: ");
scanf("%d", &n);printf("Menu:\n1. Add patient to queue\n2. Let patient visit doctor\n3. Display waiting list\n4. Exit\n");
while(ch != 4)
{
    printf("Enter choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        break;
        default:
        printf("***INVALID CHOICE***\n");
        break;
    }
}
}
void enqueue()
{
   if(isFull())
  {
   printf("Queue is Full\n");
   return;
  }
  printf("Enter patient's name:\n");
  rear++;
  scanf("%s",str[rear]);
}
int isFull()
{
return rear == n - 1;
}
int isEmpty()
{
return front == n || front == rear + 1;
}
void dequeue()
{
   if(isEmpty())
{
    printf("Queue is Empty\n");
    return;
}
printf("The patient %s is visiting the doctor\n", str[front]);
front++;
}
void display()
{
       if(isEmpty())
      {
       printf("Queue is Empty\n");
       return;
       }
    printf("The patients waiting:\n");
    for(i = front; i <= rear; i++)
        printf("%s\n", str[i]);
}


