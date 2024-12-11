#include<stdio.h>
#include<stdbool.h>
bool cheking_prime(int num1 , int maghsoomE);
bool prime(int num);
bool fogh_aval(int number);
int main()
{
    int number;
    scanf("%d" , &number);
    if(fogh_aval(number))
    printf("the number is foghaval");
    else
    printf("the number is not foghaval");
}
bool cheking_prime(int num1 , int maghsoomE)
{
    if(num1<2) return false;
    if(maghsoomE>=num1) return true;
    if(num1%maghsoomE==0) return false;
    cheking_prime(num1 , maghsoomE+1);
}
bool prime(int num)
{
    cheking_prime(num,2);
}
bool fogh_aval(int number)
{
    int tavan_dah=1;
    while(number/tavan_dah>0)
    {
    int num=number%(tavan_dah*10);
    if(!prime(num))
    return false;
    tavan_dah *= 10;
    }
    return true;
}
