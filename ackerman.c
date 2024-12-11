#include<stdio.h>
long long int ackerman(int m , int n);
int main()
{
    long long int m , n;
    scanf("%d %d" ,&m ,&n);
    printf("%lld" , ackerman(m , n));
}
long long int ackerman(int m , int n)
{
    if(m==0) return ++n;
    else if(m>0 && n==0) return ackerman(m-1 , 1);
    else if(m>0 && n>0) return ackerman(m-1 , ackerman(m , n-1));
    return -1;
}