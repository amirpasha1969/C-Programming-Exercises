#include<stdio.h>
int main()
{
    int count , number , max=0;
    scanf("%d" , &count);
    for(int i=0;i<count;++i)
    {
    scanf("%d" , &number);
    if(number>max)
    max=number;
    }
    printf("%d" , max);
}