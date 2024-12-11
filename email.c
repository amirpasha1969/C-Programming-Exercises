#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool checking(const char *email);
int main()
{
    char email[300];
    scanf("%s" , &email);
    if(!checking(email)) printf("No");
    else printf("Yes");
}
bool checking(const char *email)
{
    int count=0 , count2=0;
    int len_email=strlen(email);
    if(email[0]=='1' || email[0]=='2' || email[0]=='3' || 
    email[0]=='4' || email[0]=='5' || email[0]=='6' || 
    email[0]=='7' || email[0]=='8' || email[0]=='9' || 
    email[0]=='0' || email[0]=='.' || email[0]=='_' || email[0]=='-' ) return false;

    for(int i=0;i<len_email-1;i++)
    {
        if((email[i]=='-' || email[i]=='_' || email[i]=='.' ) && (email[i+1]=='-' || email[i+1]=='_' || email[i+1]=='.' ) ) return false;
        if(email[i]=='@')
        {
            for(int j=i+1;j<len_email;j++)
            {
                if(email[j]=='@') return false;
                if((email[j]=='.' && email[j+1]=='.') || (email[j]=='-' && email[j+1]=='-') || (email[j]=='_' && email[j+1]=='_')) return false;
                if(email[j]=='.') ++count;
                if(email[j]>=65 && email[j]<=96) return false;
            }    
        }
      if(email[i]=='@') ++count2;   
    }
    if(email[len_email-1]=='.') return false;
    if(count==0) return false;
    if(count2==0) return false;
    return true;
}