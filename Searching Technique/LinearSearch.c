#include<stdio.h>

int main(){
    int n,flag = 0;
    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter a key element to be searched:");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("Key elements found.");
    }
    else{
        printf("Not Found");
    }
    return 0;
}