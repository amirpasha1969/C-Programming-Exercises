#include<stdio.h>
int factorial(int n)
{
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main()
{
    int i;
    printf("please enter a number : ");
    scanf("%d" , &i);
    printf("the factorial of %d : is %d" , i , factorial(i));
}
