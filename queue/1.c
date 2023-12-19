// Write a program to implement QUEUE using arrays that performs following operations  (a) INSERT (b) DELETE (c) DISPLAY

#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int r;
    int f;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    else{
    return 0;
    }
}

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }else{
    return 0;
    }
}

void enqueue (struct queue *q, int val){
    if(isFull(q)){
        printf("queue is overflowed can't enter %d \n", val);
    }else{
        q->r++;
        q->arr[q->r] = val;
        printf("%d entered sucessfully \n", val);
    }
}

int dequeue(struct queue *q){
    int a;
    if(isEmpty(q)){
        printf("queue is underflow \n");
    }else{
        q->f++;
        a = q->arr[q->f];
        printf("%d is popped \n", a);
    }
    return a;
}

void display(struct queue *q){
    for(int i = q->f+1; i<=q->r; i++){
        printf("queue is : %d \n", q->arr[i]);
    }
}

int main(){
    struct queue *que = (struct queue *) malloc (sizeof(struct queue));
    que->size = 5;
    que->r = que->f = -1;
    que->arr = (int *)malloc(que->size * sizeof(int));

    enqueue(que, 3);
    enqueue(que, 4);
    enqueue(que, 1);
    enqueue(que, 6);
    enqueue(que, 7);
    display(que);
    // enqueue(que, 7);
    dequeue(que);
    dequeue(que);
    display(que);

    return 0;
}