#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *reverse(struct node *head){
    struct node *prevnode,*currentnode,*nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while(nextnode!=NULL){
        nextnode = nextnode -> next;
        currentnode -> next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
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

    head = reverse(head);
    printLinkedList(head);
    return 0;

}