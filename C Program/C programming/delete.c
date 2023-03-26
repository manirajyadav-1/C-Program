#include<stdio.h>

int main(){
    int arr[10],n,i,del,flag=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    //array elements
    printf("Enter a array elements:");
    for(i=0;i< n;i++){
    scanf("%d", &arr[i]);
    }

    printf("Enter the elements to be deleted:");
    scanf("%d",&del);

    for(i=0;i<n;i++){
        if(arr[i]==del){
            flag=1;
            break;
        }
    }

    if(flag==1){
        for(i=del-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    
    printf("The new array:");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    }else{
        printf("Elements not found");
    }
return 0;





}