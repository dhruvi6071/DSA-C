#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * new = (struct Node *) malloc (sizeof(struct Node));
    new->data = data;
    new->next = head;

    // printf("insertion success \n");
    return new;
}

struct Node * insertionAtEnd(struct Node *head, int data){
    struct Node * new = (struct Node *) malloc(sizeof(struct Node));
    new->data = data;
    struct Node * p = head;

    while(p->next!= NULL){
        p = p->next;
    }
    p->next = new;
    new->next = NULL;
    return head;
}

struct Node * insertAtIndex(struct Node *head, int index, int data){
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));
    
    struct Node *p = head;
    int i = 0;

    while(i != index-1){
        p = p->next;
        i++;
    }
    new->data = data;
    new->next = p->next;
    p->next = new;

    return head;
}

struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
    return head;
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 4;
    second->next = third;

    third->data = 9;
    third->next = NULL;
    // traversal(head);

    head = insertAtFirst(head, 21);
    head = insertionAtEnd(head, 23);
    head = insertAtIndex(head,1, 25);
    head = insertAfterNode(head, first, 22);
    traversal(head);
    return 0;
}