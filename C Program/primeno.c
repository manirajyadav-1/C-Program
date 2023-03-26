#include<stdio.h>

int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    

    if(n%2!=0 || n==2 ){
        printf("Prime Number");
    }
    else{
        printf("Not prime no");
    }
    return 0;
}