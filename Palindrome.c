#include<stdio.h>
int main()
{
    int number , reversed=0 , reminder , orginal;
    scanf("%d" , &number);
    orginal=number;
    while(number!=0)
    {
        reminder=number%10;
        reversed=reversed*10+reminder;
        number=number/10;
    }
    if(reversed==orginal)
    printf("the number is palindrome");
    else
    printf("the number is not palindrome");
}