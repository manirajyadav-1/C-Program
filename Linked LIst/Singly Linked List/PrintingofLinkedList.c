#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//counting total nodes
void count_nodes(struct node *head){ 
    int count = 0;
    if(head == NULL){
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr -> next;
    }
    printf("Total number of nodes:%d\n",count);
}

//printing data of nodes
void print_data(struct node *head){
    if(head == NULL){
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr -> next;
    }
}

//adding node at end
void add_at_end(struct node *head,int n){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*) malloc(sizeof(struct node));

    temp->data = n;
    temp->next = NULL;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}


int main(){
    struct node *head = (struct node*) malloc(sizeof(struct node));
    head -> data = 30;
    head -> next = NULL;

    struct node *current = (struct node*) malloc(sizeof(struct node));
    current -> data = 40;
    current -> next = NULL;
    head -> next = current;
    
    current = (struct node*) malloc(sizeof(struct node));
    current -> data =50;
    current -> next = NULL;
    head -> next -> next = current;

    add_at_end(head,9100);
    count_nodes(head);
    print_data(head);

    return 0;
}

