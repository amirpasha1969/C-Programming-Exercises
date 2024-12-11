#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d" , &n);
    long long max1=LLONG_MIN , max2=LLONG_MIN , max3=LLONG_MIN;
    for(int i=0;i<n;++i)
    {
        long long num;
        scanf("%lld" , &num);
        if(num>max1)
        {
            max3=max2;
            max2=max1;
            max1=num;
        }
        else if(num>max2)
        {
            max3=max2;
            max2=num;
        }
        else if(num>max3)
        max3=num;
    }
    printf("%lld" , max3);
}