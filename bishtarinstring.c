#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char most_char(const char *input , int len_input);
int main()
{
    char input[200];
    scanf("%s" , input);
    int input_len=strlen(input);
    most_char(input , input_len);

}
char most_char(const char *input , int len_input)
{
    long long int count_numbers[200]={0} , count_char[60]={0};
    for(int i=65;i<=122;i++)
    {
        static int q=0;
        int count=0;
        for(int j=0;j<len_input;j++)
        {
            if(input[j]==i) ++count;
        }
        count_numbers[q]=count;
        count_char[q]=i;
        ++q;
    }
    int max=count_numbers[0];
    for(int i=1;i<=100;i++)
    {
        if(count_numbers[i]>max)
        max=count_numbers[i];
    }
    int x;
    for(int i=0;i<=100;i++)
    {
        if(max==count_numbers[i])
        x=i;
    }
    printf("%c" , count_char[x]);
}
