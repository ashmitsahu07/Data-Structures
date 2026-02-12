#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[50];
    char c;
    int i,sum=0;
    printf("Enter a string");
    scanf("%s",s);
    int length=0;
    length=strlen(s);
    for(i=0;i<=(length-1);i++)
    {
       c=tolower(s[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
             sum=sum+1;
        }
    }
    printf("Number of Ovals:%d ",sum);
    return 0;
}
