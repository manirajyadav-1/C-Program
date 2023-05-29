#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *deleteatindex(struct node *head,int index){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    struct node *q = (struct node*) malloc(sizeof(struct node));
    ptr = head;
    q = head->next;
    for(int i=1;i<index-1;i++){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
}

void printlinkedlist(struct node *head){
    if(head==NULL){
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node *head = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));
    struct node *third = (struct node*) malloc(sizeof(struct node));
    
    head->data = 10;
    head-> next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    deleteatindex(head,3);
    printlinkedlist(head);
    return 0;
}