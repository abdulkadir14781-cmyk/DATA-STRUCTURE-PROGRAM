#include<stdio.h>
#include<stdlib.h>
#define QUEUESIZE 3
typedef struct{
    char item[QUEUESIZE];
    int front,rear;
}queue;
void push(queue*q)
{
    char x;
    printf("\nEnter element to be inserted: ");
    scanf(" %c",&x);
    if(q->rear == QUEUESIZE - 1)
        printf("\nQueue is overflow");
    else
        q->rear=q->rear+1;
        if( q->front == -1)
           q->front =0;
        q->item[q->rear]=x;
}
void pop(queue*q)
{
    int a;
    if(q->front > q-> rear || q-> front == -1)
        printf("\nQueue is empty");
    else
    {
        a=q->item[q->front];
        q->front=q->front+1;
      printf("\nDeleted Element is %c",a);
    }
}
void traverse(queue*q)
{
    int i;
    if(q->front>q->rear || q->front == -1)
        printf("\nQueue is empty");
    else
        for(i=q->front;i<=q->rear;i++)
        printf(" %c",q->item[i]);
}
int main()
{
    int choice;
    queue q;
    q.front=-1;
    q.rear =-1;
    char ch;
    do
    {
       printf("\n1. INSERTION");
       printf("\n2. DELETION");
       printf("\n3. TRAVERSE");
       printf("\n4. Exit");
       printf("\nEnter choice: ");
       scanf("%d",&choice);

       switch(choice)
       {
       case 1:
        push(&q);
        break;
       case 2:
       pop(&q);
        break;
       case 3:
        traverse(&q);
        break;
        default:
            printf("\n you enter wrong choice");
       }
       fflush(0);
        printf("\nDo you want to continue yes/no:");
        scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');
  return 0;
}
