#include <stdio.h>
#include <math.h>
#define SIZE 9

long long int sum = 0;
int t1=0;
long long int calculate(long long int number1, long long int number2, const long long int jadval[SIZE][SIZE] , int digit1 , int digit2);
long long int digts(const long long int jadval[SIZE][SIZE], long long int number1 , long long int number2);

int main()
{
    long long int jadval[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%lld", &jadval[i][j]);
        }
    }

    long long int number1, number2 , neg1 , neg2 , nnumber1 , nnumber2;
    scanf("%lld %lld", &number1, &number2);
    nnumber1=number1;
    nnumber2=number2;
    if(number1<0)
    { 
    neg1=number1*number1; 
    number1=sqrt(neg1);
    }
    if(number2<0)
    {
    neg2=number2*number2;
    number2=sqrt(neg2);
    }
    digts(jadval,number1,number2);
    if(nnumber1>0 && nnumber2>0)
    printf("%lld", sum);
    if((nnumber1<0 && nnumber2>0) || (nnumber1>0 && nnumber2<0))
    printf("-%lld" , sum);
    if(nnumber1<0 && nnumber2<0)
    printf("%lld", sum);
    return 0;
}
long long int digts(const long long int jadval[SIZE][SIZE], long long int number1 , long long int number2)
{
    long long int count1=0 , count2=0 , orginal1=number1 , orginal2=number2;
    while(number1>0)
    {
        number1 /= 10;
        ++count1;
    }
    while(number2>0)
    {
        number2 /= 10;
        ++count2;
    }
    calculate(orginal1 , orginal2 , jadval , count1 , count2);
}
long long int calculate(const long long int number1, long long int number2, const long long int jadval[SIZE][SIZE] , int digit1 , int digit2)
{
    int  tavan1=10 , tavan2=10 , t=0;
    long long int copy=number1;
    
    for(int i=0;i<digit1;i++)
    {
        int x1 , x2;
        x1=copy%10;
        x2=number2%10;
        sum=sum+((jadval[x1-1][x2-1])*(pow(tavan1 , t))*(pow(tavan2 , t1)));
        copy /= 10;
        if(copy<0) break;
        ++t;
    }
    t1 += 1;
    digit2=digit2-1;
    if(digit2!=0)
    return calculate(number1 , number2/10 , jadval , digit1 , digit2);
}
