#include <stdio.h>

int main(){
   int arr[100],n,pos,i;

   //for size of an array
   printf("Enter size of an array:");
   scanf("%d",&n);

   //for elements of array
   printf("Enter elements of an array:");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }

   //for position
   printf("Enter the position to be inserted:");
   scanf("%d",&pos);

   for(i=n;i>=pos-1;i--){
    arr[i]=arr[i-1];
   }
   arr[pos-1]=n;

   printf("the new array is:\n");
   for(i=0;i<n;i++){
    printf("%d",arr[i]);
   }
   return 0;
}