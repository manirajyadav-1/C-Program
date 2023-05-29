#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *insert_at_end(struct node *head,int data){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    struct node *new = (struct node*) malloc(sizeof(struct node));
    ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr-> next;
    }
    ptr->next = new;
    new->data = data;
    new->next = NULL;
    return head;
}

void printlinkedlist(struct node *head){
    if(head == NULL){
        printf("Linked List is empty.");
    }
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));
    struct node *third = (struct node*) malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    head=insert_at_end(head,40);
    printlinkedlist(head);
    return 0;

}