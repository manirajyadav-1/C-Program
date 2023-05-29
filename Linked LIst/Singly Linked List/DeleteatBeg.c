#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *deleteatbeg(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
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

    head=deleteatbeg(head);
    printlinkedlist(head);
    return 0;
}