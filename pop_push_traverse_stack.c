#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 4
typedef struct
{
    char item[STACKSIZE];
    int top;
}stack;
void push(stack*s)
{   char x;
    printf("\nEnter Element into stack: ");
    scanf(" %c",&x);
    if(s->top ==STACKSIZE - 1)
        printf("\nStack is overflow");
    else
    {
        s->top+=1;
        s->item[s->top]=x;
    }
}
void pop(stack*s)
{
    char y;
    if(s->top == -1)
    printf("\nStack is Empty");
    else
    {
       y=s->item[s->top];
       s->top=s->top-1;
       printf("\nDeleted Element is %c",y);
    }
}
void traverse(stack s)
{   int i;
    if(s.top == -1)
        printf("Stack is empty");
    else
     printf("\nTraverse the element:");
     for(i=s.top; i>=0;i--)
     {
        printf("\n %c",s.item[i]);
     }

}

int main()
{
    stack s;
    s.top=-1;
    char ch;
    int choice;

    do
    {
    printf("\n1. For push operation");
    printf("\n2. For pop operation");
    printf("\n3. For traverse operation");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        push(&s);
        break;
    case 2:
        pop(&s);
        break;
    case 3:
        traverse(s);
        break;
    default:
        printf("\nEnter Wrong choice!");
    }
    fflush(0);
    printf("\n Do you Wish to continue(Yes/No): ");
    scanf(" %c",&ch);
    }while(ch=='Y'|| ch=='y');
    return 0;
}
