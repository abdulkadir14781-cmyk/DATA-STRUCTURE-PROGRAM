#include<stdio.h>
void tower(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("\ndisc moves from tower %c to tower %c",A,C);
    }
    else
    {
        tower(n-1,A,C,B);
        tower(1,A,B,C);
        tower(n-1,B,A,C);
    }
}
void main()
{
    int n;
    char A='A';
    char B='B';
    char C='C';
    printf("\nEnter Number of disc in tower: ");
    scanf("%d",&n);
    tower(n,A,B,C);

}
