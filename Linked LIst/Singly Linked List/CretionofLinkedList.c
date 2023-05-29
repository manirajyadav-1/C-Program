#include<stdio.h>
#include<stdlib.h>
 
// Creation and printing of a single linked list
struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* create(int n) {
    struct node* head = NULL;
    struct node* ptr = NULL;
    
    for (int i = 1; i <= n; i++) {
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            ptr = newNode;
        } else {
            ptr->next = newNode;
            ptr = ptr->next;
        }
    }
    
    return head;
}

void display(struct node* head) {
    struct node* ptr = head;
    
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// void freeList(struct node* head) {
//     struct node* temp;
    
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    head = create(n);
    
    printf("The created linked list: ");
    display(head);
    
    // Free allocated memory
    //freeList(head);
    
    return 0;
}
