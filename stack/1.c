#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *s){
    if(s->top == -1){
        return -1;
    }
        return 0;
    
}

int isFull(struct stack *s){
    if(s->top == s->size-1){
        return -1;
    }
        return 0;
    
}

void push(struct stack *s, int val){
    if(isFull(s)){
        printf("stack is full can't push element \n");
    }else{
        s->top++;
        s->arr[s->top] = val;
        printf("value %d inserted \n", val);
    }
}

int pop(struct stack *s){
    int a;
    if(isEmpty(s)){
        printf("stack is empty can't pop element \n");
    }else{
        a = s->arr[s->top];
        s->top--;
        printf("%d is popped \n", a);
    }
    return a;
}

void display(struct stack *s){
    for(int i = 0; i<=s->top; i++){
        printf(" stack is :%d \n", s->arr[i]);
    }
}

int peep(int i, struct stack *s){
    int a = s->top-i+1;
    if(a<0){
        printf("please enter valid index i \n");
    }
    else{
        printf("number on %d is: %d \n",i, s->arr[a]);
    }
}

int main() {
    struct stack *stk = (struct stack *) malloc (sizeof(struct stack));
    stk->top = -1;
    stk->size = 5;
    stk->arr = (int *)malloc(sizeof(int));

    push(stk, 23);
    push(stk, 35);
    push(stk, 32);
    push(stk, 65);
    push(stk, 21);
    push(stk, 78);
    pop(stk);
    display(stk);
    peep(2, stk);


}