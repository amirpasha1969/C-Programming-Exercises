#include<stdio.h>
int main()
{
    int n , k;
    long long int x;
    scanf("%d %lld %d" , &n , &x , &k );
    int slot;
    k -=1;
    long long int result;
    result=k*x;
    printf("%lld" , result);
}    