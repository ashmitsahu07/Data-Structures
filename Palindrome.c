#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],t[50];
    int i,j=0;
    int length;
    printf("Enter the world\n");
    scanf("%s",s);
    length=strlen(s);
    for(i=length-1;i>=0;i--)
    {
        t[j]=s[i];
        j++;
    }
    printf("original:%s|Reversed:%s\n",s,t);
    if(strcmp(t,s)==0)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}
