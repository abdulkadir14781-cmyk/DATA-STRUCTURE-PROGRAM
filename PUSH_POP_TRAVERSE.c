#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 4
typedef struct
{
    char item[STACKSIZE];
    int top;
}stack;
void push(stack*s,char x
          )
{

    if(s->top ==STACKSIZE - 1)
        printf("\nStack is overflow");
    else
    {
        s->top=s->top+1;
        s->item[s->top]=x;
    }
}
char pop(stack*s)
{   char y;
    if(s->top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        y=s->item[s->top];
        s->top=s->top-1;
    }
    return y;
}
void traverse(stack*s)
{   int i;
    if(s->top == -1)
        printf("Stack is empty");
    else
    {
     printf("\nDisplay the element:");
     for(i=s->top; i>=0;i--)
     {
        printf("\n %c",s->item[i]);
     }
    }
}

void main()
{
    stack s;
    int choice;
    s.top=-1;
    char x;
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
        printf("\nEnter Element into stack: ");
        scanf("%c",&x);
        push(&s,x);
        break;
    case 2:
        pop(&s);
        break;
    case 3:
        traverse(&s);
        break;
    default:
        printf("\nEnter Wrong choice!");
    }
    }while(choice!=0);
}

