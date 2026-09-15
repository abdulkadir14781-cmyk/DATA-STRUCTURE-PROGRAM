#include<stdio.h>

long int fact(long int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    long int n;
    printf("Enter number:");
    scanf("%ld",&n);
    printf("The Factorial of given number is:%ld",fact(n));
    return 0;
}

1
