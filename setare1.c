#include<stdio.h>
int main()
{
    int x;
    scanf("%d" , &x);
    for(int i=1; i<=x ; ++i)
    {
        for(int k=0;k<x-i;++k)
        {
            printf(" ");
        }
        for(int n=0 ;n<(2*i-1);++n)
        {
            printf("*");
        }
        
        printf("\n");
    }
}