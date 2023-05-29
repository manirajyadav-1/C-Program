#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *insertatend(struct node *head,int data){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    struct node *new = (struct node*) malloc(sizeof(struct node));
    ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    new->data = data;
    new->prev = ptr;
    ptr->next = new;
    new->next = NULL;
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

    head = insertatend(head,40);
    print(head);

}