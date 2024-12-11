#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool cheking(const char name[] , const char word[])
{
    int len_name=strlen(name);
    int len_word=strlen(word);
    if(strcmp(name , word)==0) return true;
    if(len_name==len_word+1)
    {
        char tmp[200];
        for(int i=0;i<len_name;i++)
        {
            strncpy(tmp , name , i);
            strcpy(tmp+i , name+i+1);

            if(strcmp(tmp , word)==0) return true;
        }
    }
    return false;
}
int main()
{
    char name[200] , word[2000][200];
    int n , count=0;
    scanf("%s" , &name);
    scanf("%d" , &n);
    for(int i=0;i<n;i++)
    {
        scanf("%s" , word[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(cheking(name , word[i])) ++count;
    }
    printf("%d" , count);  
}
//abcd
/*abc
tmp=acd
tmp=bcd
tmp=cdd
*/