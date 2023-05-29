#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//insertion at beginning
struct node *insert_at_begin(struct node *head,int data){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
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

    head = insert_at_begin(head,40);
    printLinkedList(head);
    return 0;

}