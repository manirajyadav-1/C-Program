#include<stdio.h>

int binary_search(int n,int arr[],int key){
    int left = 0, right = n-1;
    while(right<=left){
        int mid = (left+right)/2;
        for(int i=0;i<n;i++){
            if(arr[i] == key){
                return key;
            }
            else if(arr[i] < key){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
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

    binary_search(n,arr,key);
    if(key == -1){
        printf("Not Found");
    }
    else{
        printf("Found");
    }
}