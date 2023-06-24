#include<stdio.h>

void merge(int arr[],int l,int m,int r){
    int i = 0,j = 0,k = l;

    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1],R[n2];

    //copying data to temp arrays
    for(int p=0;p<n1;p++){
        L[p] = arr[l+p];
    }

    for(int q=0;q<n2;q++){
        R[q] = arr[m+1+q];
    }

    while(i < n1 && j< n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //copyinng the elements of L[](if any left)
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    //copying the elements of R[](if any)
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int l, int r){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    printf("Sorted elements are:");
    printArray(arr,n);
    return 0;
}