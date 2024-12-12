#include<stdio.h>
#include<stdbool.h>
bool searching(int *numbers , int n);
int main()
{
    int number;
    scanf("%d" , &number);
    int numbers[number];
    for(int i=0;i<number;i++)
        {
            scanf("%d" , &numbers[i]);
        }
    if(searching(numbers)) printf("True");
    else printf("False");
}
bool searching(int *numbers , int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(numbers[i]+numbers[j]==0) return true;
                }
        }
    return false;
}
