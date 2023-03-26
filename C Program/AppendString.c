#include<stdio.h>

int main(){
    char str1[100],str2[100],i,j;
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    
    //storing value of str1
    for(int i=0;str1[i]!='\0';i++);

    for(int j=0;str2[j]!='\0';j++,i++){
        str1[i] = str2[j];
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;
}