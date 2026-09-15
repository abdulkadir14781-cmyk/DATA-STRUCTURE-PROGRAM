#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 4
typedef struct
{
    char item[STACKSIZE];
    int top;
}stack;
void push(stack*s,int x)
{
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
    char x;
    if(s->top == -1)
       printf("\nStack is empty");
    else
    {
        x=s->item[s->top];
        s->top=s->top -1;
    }
}

void traverse(stack*s)
{   int i;
    if(s->top == -1)
        printf("Stack is empty");
    else
     printf("\nTraverse the element:");
     for(i=s->top; i>=0;i--)
     {
        printf("\n %d",s->item[i]);
     }

}

void main()
{
    stack s;
    int x;
    int choice;
    s.top=-1;
    char ch;

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
        scanf("%d",&x);
        push(&s,x);
        break;
    case 2:
        printf("\nDelete the element :");
        pop(&s);
        break;
    case 3:
        traverse(&s);
        break;
    default:
        printf("\nEnter Wrong choice!");
    }
    printf("\n Do you Wish to continue(Yes\no)");
    scanf("\n%c",&ch);
    }while(ch=='Y'|| ch=='Y');
}


