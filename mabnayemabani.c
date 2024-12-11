#include<stdio.h>
#include<math.h>
int main()
{
    long long int number , mabnaye1 , mabnaye2 , nnumber1=0 , nnumber2 , result=0 , p=0 , c=0;
    scanf("%lld %lld %lld" ,&number ,&mabnaye1 ,&mabnaye2);
    while(number!=0)
    {
        long long int x ;
        long long int reminder;
        x=number%10;
        reminder=x*pow(mabnaye1 , p);
        number=number/10;
        nnumber1=nnumber1+reminder;
        p+=1;
    }

    while(nnumber1!=0)
    {
        long long int y , q ;
        y=nnumber1%mabnaye2;
        q=y*pow(10 , c);
        nnumber1=nnumber1/mabnaye2;
        result=result+q;
        ++c;
    }
    printf("%lld" , result);
}