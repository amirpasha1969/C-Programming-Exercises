#include<stdio.h>
int main()
{
    int number;
    scanf("%d" , &number);
    long long int number1=1 , number2=1 ;
    long long int sum=1;
    for(int i=2;i<number;i++)
    {
        long long int tmp;
        tmp=number1;
        sum=sum+tmp;
        number1=number2;
        number2=sum;

    }
    printf("%lld" , sum);
}