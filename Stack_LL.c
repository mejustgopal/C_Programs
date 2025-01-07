#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *top = NULL;

void push(int val)
{
    node *z;
    z = (node *)malloc(sizeof(node));
    if (z == NULL)
    {
        printf("Memory full");
        return;
    }
    z->data = val;
    z->next = top;
    top = z;
}

void pop()
{
    node *t;
    if (top == NULL)
    {
        printf("Empty");
        return;
    }
    t = top;
    top = top->next;
    free(t);
}

void peep()
{
    node *m;
    if (top == NULL)
    {
        printf("Empty");
        return;
    }
    for (m = top; m != NULL; m = m->next)
        printf("%5d", m->data);
}

int main()
{
    push(10);
    push(20);
    push(30);
    peep();
    
    pop();
    peep();
    return 0;
}