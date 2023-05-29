#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(){
    struct node *new = (struct node*) malloc(sizeof(struct node));
    printf("Enter a data:");
    int data;
    scanf("%d",&data);
    new->data = data;
    new->next = top;
    top = new;
    printf("Inserted Successfully.\n");
}

void pop(){
    if(top == NULL){
        printf("Stack is empty.");
    }
    else{
        struct node *temp = top;
        top = top->next;
        free(temp);
        printf("Popped Successfully.\n");
    }
}

void display(){
    if(top == NULL){
        printf("\nStack is empty.\n");
    }
    else{
        struct node *temp = top;
        while(temp!=NULL){
            printf("\n%d",temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    while(1){
        int choice;
        printf("\n1.Push\n2.Pop\n3.Display");
        printf("\nEnter a choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
        }

    }
}