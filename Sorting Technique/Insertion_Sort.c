#include<stdio.h>

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(key < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; 
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n,flag = 0;
    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);

    printf("Sorted elements are:");
    print(arr,n);

}
