#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *delete(struct node *head){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
    return head;
}

void print(struct node *head){
    if(head==NULL){
        printf("Linked List is empty.");
    }
    struct node *ptr = head;
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
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    head = delete(head);
    print(head);
    return 0;
}