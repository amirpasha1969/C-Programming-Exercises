#include<stdio.h>
#include<string.h>
void calculate(const char *numbers);
int main()
{
    char numbers[100];
    scanf("%s" , numbers);
    
}
void calculate(const char *numbers)
{
    int numbers_len=strlen(numbers) , holder1[10]=0 , holder2=0 , j=0;
    for(int i=0;i<numbers_len;i++)
    {
        int x[10];
        if(numbers[i]=='(')
        {
            holder1[j]=i;
        }
        if(numbers[i]==')')
        {
            holder2=i;
            x[j]=holder2-holder1[j];
            ++j;
        }
        
    }
    for(int k=0;k<j;k++)
    {
        int a;
        a=holder1[k];

        for(int q=a;q<)
    }
}