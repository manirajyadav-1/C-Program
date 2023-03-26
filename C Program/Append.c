#include <string.h>
#include <stdio.h>

int main()
{
    int i,len=0,j;
    char str[50],str1[50],ch,ch1;
    printf("\nEnter the First String : " );
    gets(str);
    printf("\nEnter the Second String : " );
    gets(str1);
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    for(i=0; str1[i]!='\0'; i++)
    {
        str[len++]=str1[i];
    }
    str[len]='\0';
    printf("\n Concatenated String is: %s ",str);
    return 0;
}