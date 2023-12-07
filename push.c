#include<stdio.h>
#include<stdlib.h>

struct stack {
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *s){
    if(s->top == (-1)){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *s, int val){
    if(isFull(s)){
        printf("The stack is full cannot enter %d \n", val);
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}

void print(struct stack *s){
    for(int i=0; i<=(s->top ); i++){
        printf("%d \n", s->arr[i]);
    }
}

int main() {
    struct stack *stk = (struct stack*)malloc(sizeof(struct stack));
    stk->top = -1;
    stk->size = 3;
    stk->arr = (int *)malloc(stk->size * sizeof(int));

    
    push(stk, 1);
    push(stk, 2);
    print(stk);
 
    push(stk, 3);
    push(stk, 4);
    print(stk);

    

    return 0;
}