#include<stdio.h>
#include<stdlib.h>
                                     
struct node{
    int data;
    struct node *next;
};

struct node *deleteatend(struct node *head){
    struct node *ptr = head;
    struct node *q = (struct node*) malloc(sizeof(struct node));
    
    while(q!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}


void printlinkedlist(struct node *head){
    if(head == NULL){
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node *head = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));
    struct node *third = (struct node*) malloc(sizeof(struct node));

    head->data = 50;
    head->next = second;

    second->data = 60;
    second->next = third;

    third->data = 70;
    third->next = NULL;

    head=deleteatend(head);
    printlinkedlist(head);
    return 0;
}
