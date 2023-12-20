#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};



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

    traversal(head);
    return 0;
}