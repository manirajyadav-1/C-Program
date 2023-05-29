#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *deleteatpos(struct node *head,int pos){
    struct node *ptr = head;
    for(int i=0;i<pos-1;i++){
        ptr=ptr->next;
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    free(ptr);
    return head;
}

void print(struct node *head){
    if(head==NULL){
        printf("Linked list is empty.");
    }
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node *head = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));
    struct node *third = (struct node*) malloc(sizeof(struct node));

    head->data=10;
    head->prev=NULL;
    head->next=second;

    second->data=20;
    second->prev=head;
    second->next=third;

    third->data=30;
    third->prev=second;
    third->next=NULL;

    head=deleteatpos(head,2);
    print(head);
}