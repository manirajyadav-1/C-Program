#include<stdio.h>
#define N 5

int queue[N],front = -1,rear = -1;

void enqueue(){
    printf("Enter a data to be inserted:");
    int x;
    scanf("%d",&x);
    if(rear == N-1){
        printf("Queue Overflow.");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
    printf("\nEnqueued Succesfully!!\n");
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is empty.");
    }
    else if(front ==  rear){
        front = rear = -1;
    }
    else{
        front++;
    }
    printf("\nDequeued Successfully!!\n");
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty.");
    }
    printf("Queue List: ");
    for(int i=front;i<rear+1;i++){
        printf("%d ",queue[i]);
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

