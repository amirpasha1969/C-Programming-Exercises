#include<stdio.h>
#include<stdbool.h>
int checking(int number1 , int number2);
int prime(int number);
int idk(int sum);
int count=0;
int main()
{
int number1 , number2;
scanf("%d",&number1);
scanf("%d",&number2);
checking(number1,number2);
if(count==0) 
printf("NOOP");
}
int checking(int number1 , int number2)
{
    
    if(number1<number2)
    {
    if(prime(number1)==number1)
    printf("%d\n" , number1);
    count += 1 ;
    }
    return checking(number1+1 , number2);
    

}
int prime(int number)
{
    int sum=0;
    for(int i=1;i<number;i++)
    {
        int x;
        x=number%i;
        if(x==0)
        sum=sum+i;
    }
    idk(sum);
}
int idk(int sum)
{
 
}