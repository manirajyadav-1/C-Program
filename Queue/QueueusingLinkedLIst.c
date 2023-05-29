#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enqueue(){
    printf("Enter a value to be inserted:");
    int value;
    scanf("%d",&value);
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = 0;
    if(front == 0 && rear == 0){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    if(front == 0 && rear == 0){
        printf("Queue is empty.");
    }
    else{
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}

void display(){
    if(front == 0 && rear == 0){
        printf("Queue is empty.");
    }
    struct node *temp = front;
    printf("Queue List: ");
    while(temp!=0){
        printf("%d ",temp->data);
        temp = temp->next;
    }
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