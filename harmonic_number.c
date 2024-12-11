#include<stdio.h>
int main()
{
    int number , remainder , sum=0 , n=0 ;
    double avg , result;
    scanf("%d" , &number);
    for(int i=1;i<=number;++i)
    {
        remainder=number%i;
        if(remainder==0)
        {
        sum=sum+i;
        n+=1;
        }
    }        
    avg=(double)sum/n;
    result=avg-(int)avg;
    if(result==0.0)
    printf("the number is harmonic");
    else
    printf("the number is not harmonic");
    
}