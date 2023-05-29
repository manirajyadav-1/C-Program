#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *pos(struct node *head,int data,int pos){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    struct node *new = (struct node*) malloc(sizeof(struct node));
    ptr = head;
    
    for(int i=1;i<pos-1;i++){
        ptr = ptr->next;
    }
    new->data = data;
    new->prev = ptr;
    new->next = ptr->next;
    ptr->next = new;
    new->next->prev = new;
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

    head = pos(head,50,2);
    print(head);
    return 0;
}