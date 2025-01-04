#include<stdio.h>
#define size 5
int stack[size],top=-1;
void push(int val)
{
    if(top==size-1)
    {
        printf("Stack Full");
        return;
    }
    else
    {
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf(" Empty Stack");
        return;
    }
    else
        top--;
}

void peep()
{
    int i;
    if(top==-1)
    {
        printf(" Empty Stack");
        return;
    }
    for(i=top;i>=0;i--)
        printf("%5d", stack[i] );
}

int main(){
    push(10);
    push(20);
    push(30);
    peep();
    pop();
    peep();
    return 0;
}