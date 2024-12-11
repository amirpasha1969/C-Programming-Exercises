#include<stdio.h>
#include<math.h>
int main()
{
    long long int num1 , num2 , num3 ;
    scanf("%lld %lld %lld" ,&num1 ,&num2 ,&num3 );
    if(num2*num2-4*num1*num3==0 && num2>0 && num1>0 && num3>0)
    {
        printf("1");
        return 0;
    }
    if(num2*num2-4*num1*num3==0 && num2<0 && num1>0 && num3>0)
    {
        printf("2");
        return 0;
    }
    if(num2==0)
        printf("3");
    else 
    printf("None");
    
}