#include<stdio.h>
int main()
{
    long long int number;
    int x , i=0;
    scanf("%lld" , &number);
    while(number!=0)
    {
        x=number%10;
        if(x== 2 || 4 || 6 || 8 || 9 || 0 )
        {
            ++i;
        }
        number=number/10;
       
    }   

}