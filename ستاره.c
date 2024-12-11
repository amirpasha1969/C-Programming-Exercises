#include<stdio.h>
int main()
{
    int x;
    scanf("%d" , &x);
    for(int i=0; i<x ; ++i)
    {
        for(int n=0 ;n<i;++n)
        {
            printf("*");
        }
        printf("\n");
    }
}