#include<stdio.h>
int main()
{
    int number;
    printf("please enter a number: ");
    scanf("%d" , &number);
    for(int i=2;i<(number-1);++i)
    {
        if(number%i==0)
        {
        printf("the number is not prime!");
        return 0;
        }
        else
        {
        printf("the number is prime");
        return 0;
        }
    }
    
}