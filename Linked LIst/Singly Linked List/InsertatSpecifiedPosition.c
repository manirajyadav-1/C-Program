#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

struct node *insert_at_pos(struct node *head,int data,int pos){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    struct node *new = (struct node*) malloc(sizeof(struct node));
    ptr = head;

    for(int i=0;i<pos-1;i++){
        ptr = ptr->next;
    }
    new->data = data;
    new->next = ptr->next;
    ptr->next = new;
    return head;

}

void printLinkedList(struct node *head){
    if(head == NULL){
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
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

    head = insert_at_pos(head,40,1);
    printLinkedList(head);
    return 0;

}