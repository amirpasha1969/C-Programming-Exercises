#include<stdio.h>
#include<string.h>

void reverse(char n[], int start , int end)
{
    if(start>=end) return;
    char tmp=n[start];
    n[start]=n[end];
    n[end]=tmp;
    reverse(n, start+1 , end-1 );
}

int main()
{
    char n[100];
    scanf("%s" , &n);
    int b = strlen(n);
    reverse(n, 0 , b-1 );
    printf("%s" , n );
}

/*reverse kardan baraye reshte :
library : stdio , string
function of reverse :
reverse(char str[] , int start , int end )
{
    if(start>=end) return;
    char tmp=str[start];
    str[start]=str[end];
    str[end]=tmp;
    reverse(str , start+1 , end-1);
}
int main()
{
    ...
}
*/