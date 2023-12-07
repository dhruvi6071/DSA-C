#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *s)
{
    if (s->top == (-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s, int val)
{
    if (isFull(s))
    {
        printf("The stack is full cannot enter %d \n", val);
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}

int pop(struct stack *s)
{
    int a;
    if (isEmpty(s))
    {
        printf("stack is full can't pop");
    }
    else
    {
        a = s->arr[s->top];
        s->top--;
    }
    return a;
}

int peek(struct stack *s,  int i){
    int a = (s->top)-i+1;
    if(a<0){
        printf("enter valid number");
    }
    else{
         printf("%d \n", s->arr[a]);
    }

    return s->arr[a];
}

void print(struct stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d \n", s->arr[i]);
    }
}

int main()
{
    struct stack *stk = (struct stack *)malloc(sizeof(struct stack));
    stk->top = -1;
    stk->size = 5;
    stk->arr = (int *)malloc(stk->size * sizeof(int));

    push(stk, 1);
    push(stk, 2);
    push(stk, 3);
    push(stk, 4);
    print(stk);

    printf("element at index is : ");
    peek(stk, 2);
    printf("after pop \n");
    pop(stk);
    pop(stk);
    print(stk);

    return 0;
}