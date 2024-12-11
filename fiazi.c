#include<stdio.h>
int main(){
    long long int count1 , count2 , num1 , num2 ,  n1=0 , n2=0 , count_number[500] , v=500;
    scanf("%lld\n" , &count1 );
    scanf("%lld\n" , &num1);
    scanf("%lld\n" , &count2);
    scanf("%lld\n" , &num2);
    while(num1>0)
    {   
        int x;
        x=num1/10;
        ++n1;
    }
    if(n1!=count1)
    return 0;
    while(num2>0)
    {   
        int x;
        x=num2/10;
        ++n2;
    }
    if(n2!=count2)
    return 0;
    while(num1>0 && num2>0)
    {    
    long long int x , y , f , result;
    x=num1%10;
    y=num2%10;
    f=x+y;
    printf("%lld" , num1);
    if(f>10)
    {
        f=f-10;
        count_number[v]=f;
        printf("%lld" , count_number[v] );
        result=num1+num2;
        result=result%10000;
        result=result/1000;
        result +=1;
    }
    v-=1;
    }
}