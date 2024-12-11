#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool cheking_prime(int number)
{
    if(number<=1) return false;
    for(int i=2;i<=sqrt(number);i++)
    {
        if(number%i==0) 
        return false;
    }
    return true;
}

int goldbach(int number)
{
    if(number<=2 || number%2!=0)
    {
    printf("the number is not correct ridi");
    return 0;
    }
    for(int j=2;j<=number/2;j++)
    {
        if(cheking_prime(j) && cheking_prime(number-j))
        {
        printf("%d + %d = %d" , j , number-j , number);
        return 0;
        }
    }

}

int main()
{
    int number;
    printf("please enter a even number greater than 2 : ");
    scanf("%d" ,&number);
    goldbach(number);
    return 0;
}