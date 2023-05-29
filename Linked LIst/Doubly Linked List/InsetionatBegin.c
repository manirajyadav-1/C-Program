#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert(struct node *head,int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
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
    second->prev = head->next;
    second->next = third;

    third->data = 30;
    third->prev = second->next;
    third->next = NULL;

    head = insert(head,50);
    print(head);
    return 0;
}