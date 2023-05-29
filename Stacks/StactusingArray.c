#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE],top = -1;

void push(){
    int data;
    printf("Enter a data to be inserted:");
    scanf("%d",&data);
    if(top == SIZE-1){
        printf("Stack Overflow.");
    }
    else{
        stack[++top] = data;
        printf("Inserted Successfully.");
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow.");
    }
    else{
        top--;
        printf("Deleted Successfully");
    }
}

void display(){
    if(top == -1){
        printf("Stack Underflow.");
    }else{
        printf("\nStack Elements are:\n");
        for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    }
}


int main(){
    while(1){
        int choice;
        printf("\n\n1.Push\n2.Pop\n3.Display\n");
        printf("\nEnter a choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            default:
            printf("Bad Selection!! Please try again.");
        }
    }

}