#include<stdio.h>
#define QUEUESIZE 4

typedef struct 
{
    char item[QUEUESIZE];
    int front,rear;
}queue;
void circular_insert(queue*q)
{
  char x;
  printf("\nEnter Element to be inserted: ");
  scanf(" %c",&x);
  if (q->front == (q->rear+1)%QUEUESIZE)
    printf("\nCircular Queue is Overflow");
  else
  {     
    q->rear=(q->rear+1)%QUEUESIZE;
    q->item[q->rear]=x;
    if (q->front == -1)
    q->front =(q->front+1)%QUEUESIZE;
  }
}
void delete(queue*q)
{   
    char y;
    if(q->front == -1)
    printf("\nCircular Queue is Empty or Underflow");
    else
    {
        y=q->item[q->front];
        if (q->front == q->rear)
        {
         q->front =-1;
         q->rear =-1;
        }
        else
         q->front=(q->front+1)%QUEUESIZE;
        printf("\nDeleted element is %c",y);
    }
}
void display(queue q)
{
    int i;
    if(q.front == -1)
    printf("\nCircular Queue is Empty or Underflow");
    else
    {
        for(i=q.front;i!=q.rear;i=(i+1)%QUEUESIZE)
         printf(" %c",q.item[i]);
         printf(" %c",q.item[i]);
    }
}
int main()
{
    queue q;
    q.front=-1;
    q.rear=-1;
    int choice;
    char ch;

    do
    {   
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Traverse");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            circular_insert(&q);
            break;
        case 2:
            delete(&q);
            break;
        case 3:
            display(q);
            break;
        default:
             printf("\nYou Entered Wrong Choice");
        }
        fflush(0);
        printf("\nDo you Want to Continue(yes/no): ");
        scanf(" %c",&ch);

    } while (ch=='Y'||ch=='y');
    return 0;
}