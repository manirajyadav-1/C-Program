#include<stdio.h>

int main(){
    char str1[100],str2[100];
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter first string:");
    scanf("%s",str1);
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    printf("Copied String is %s",str2);
    return 0;
}