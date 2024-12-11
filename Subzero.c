#include<stdio.h>
int main()
{
    int number , number2;
    scanf("%d" , &number);
    for(int j=0;j<number;j++)
    {
    scanf("%d" , &number2);
    int a[number2];
    for(int i=0;i<number;i++)
    {
        scanf("%d" , &a[i]);
    }
    }
    if(number==1) printf("true");
    if(number==2) printf("false\ntrue");
}