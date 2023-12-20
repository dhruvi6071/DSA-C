#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);    
    return head;
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;

    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

struct Node * deleteEnd(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

void traversal(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d \n", n->data);
        n = n->next;
    }
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

    // head = deleteFirst(head);
    head = deleteAtIndex(head, 2);
    traversal(head);
    return 0;
}