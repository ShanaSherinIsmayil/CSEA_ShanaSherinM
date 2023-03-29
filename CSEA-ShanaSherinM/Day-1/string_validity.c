#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int valid=0;
    char s[10];
    printf("Enter the string:\n");
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='*')
        {
            valid++;
        }
        else if(s[i]=='#')
        {
            valid--;
        }
        else
        {
            printf("Invalid case");
            break;
        }
    }
    printf("%d",valid);

}