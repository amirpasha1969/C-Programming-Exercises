#include<stdio.h>
int main()
{
    int x ;
    scanf("%d" , &x);
    int a=2 , q=1;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%d" , j+1);
        }
        for(int k=0;k<2*x-a-q;k++)
        {
            printf(" ");
        }
        for(int v=i+1;v>=1;v--)
        {
        if(v!=x)    
        printf("%d" , v);  
        }
      ++a;
      ++q;
      printf("\n");  
    }
}