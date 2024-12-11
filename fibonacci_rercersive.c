#include<stdio.h>
int fibo(int number)
{
    if(number==1)
    return 1;
    if(number==2)
    return 1;
    else
    return fibo(number-1)+fibo(number-2);
}

int main()
{
    int number;
    scanf("%d" , &number);
    fibo(number);
    printf("%d" , fibo(number));
}
