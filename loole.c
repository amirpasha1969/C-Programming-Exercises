#include<stdio.h>
#include<stdbool.h>
bool change(int count[] , int k);
int main()
{
    int n , k ;
    scanf("%d %d" , &n , &k);
    int count[k-1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d" , &count[i]);
        }

    }
}