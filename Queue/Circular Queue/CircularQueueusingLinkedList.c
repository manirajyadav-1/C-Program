#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(){
    printf("Enter a data:");
    int x;
    scanf("%d",&x);
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(rear == 0){
        front = rear = newnode;
        rear->next = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue(){
    struct node *temp = front;
    if(front == 0 && rear == 0){
        printf("Queue is empty.");
    }
    else if(front==rear){
        front = rear = 0;
        free(temp);
    }
    else{
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display(){
    if(front == 0 && rear == 0){
        printf("Queue is empty.");
    }
    struct node *temp = front;
    while(temp->next!=front){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}

int main(){
    while(1){
        printf("\n\n....Menu....\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("Enter a choice:");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
        }

    }

}