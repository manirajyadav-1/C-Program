#include<stdio.h>
#define N 5
int queue[N],front = -1,rear = -1;

void enqueue(){
    printf("Enter a data:");
    int x;
    scanf("%d",&x);
    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear+1)%N) == front){
        printf("Queue is full.");
    }
    else{
        rear = (rear+1)%N;
        queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is empty.");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front+1)%N;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty.");
    }
    for(int i=front;i!=rear;i=((i+1)%N)){
        printf("%d ",queue[i]);
    }
    printf("%d",queue[rear]);
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