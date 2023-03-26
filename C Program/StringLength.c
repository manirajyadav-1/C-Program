#include<stdio.h>

int main(){
    int n,length=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    char arr[100];
    printf("Enter a string:");
    scanf("%s",arr);
    
    for(int i=0;arr[i]!='\0';i++){
        length++;
    }
    printf("%d",length);
    return 0;
}