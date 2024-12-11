#include<stdio.h>
int main()
{
    int i , result=1;
    printf("please enter a number to calculate factorial : ");
    scanf("%d", &i);
    for(int j=1;j<=i;j++)
    {
        result=result*j;
        
    }
    printf("%d" , result);
    return 0;
}
