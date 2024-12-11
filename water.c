#include<stdio.h>
int main()
{
    int i;
    scanf("%d" , &i);
    if(i>-273 && i<=6000)
    {
        if(i>100)
        {
        printf("Steam");
        return 0;
        } 
        else if(i>=0 && i<=100)
        {
            printf("Water");
            return 0;
        }
        else if(i<0)
        printf("Ice");
    }
}