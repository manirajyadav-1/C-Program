#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void printDoublyLinkedList(struct node *N1){
    if(N1 == NULL){
        printf("Linked List is empty.");
    }
    struct node *ptr = NULL;
    ptr = N1;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}


int main(){
    struct node *N1 = (struct node*) malloc(sizeof(struct node));
    struct node *N2 = (struct node*) malloc(sizeof(struct node));
    struct node *N3 = (struct node*) malloc(sizeof(struct node));

    N1->data = 10;
    N1->prev = NULL;
    N1->next = N2;

    N2->data = 20;
    N2->prev = N1->next;
    N2->next = N3;

    N3->data = 30;
    N3->prev = N2->next;
    N3->next = NULL;

    printDoublyLinkedList(N1);
    return 0;
}



