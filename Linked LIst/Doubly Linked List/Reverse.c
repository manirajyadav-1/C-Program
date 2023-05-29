#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *reverse(struct node *head,struct node *last){
    struct node *current,*nextnode;
    current = head;
    while(current!=NULL){
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = last;
    current = last;
    return head;
}

void display(struct node *head){
    if(head == NULL){
        printf("Linked list is empty.");
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
    struct node *last = (struct node*) malloc(sizeof(struct node));


    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    last = third;
    third->data = 30;
    third->prev = second;
    third->next = NULL;


    head = reverse(head,last);
    display(head);

}
