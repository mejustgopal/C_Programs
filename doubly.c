#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} node;

// CREATION

node *create()
{
    node *head, *q, *r;
    char ch;
    head = (node *)malloc(sizeof(node));
    printf("\n Enter data: ");
    scanf("%d", &head->data);
    head->next = head->prev = NULL;
    q = head;
    printf("\n More(Y/N)");
    ch = getche();
    while (ch == 'Y')
    {
        r = (node *)malloc(sizeof(node));
        printf("\n Enter data: ");
        scanf("%d", &r->data);
        r->next = NULL;
        q->next = r;
        r->prev = q;
        q = r;
        printf("\n More(Y/N)");
        ch = getche();
    }
    return head;
}

// FUNCTION TO INSERT NEW NODE AT FIRST POSITION

node *ins_first(node *h)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter data for new node: ");
    scanf("%d",&n->data);
    n->next=n->prev=NULL;
    n->next=h;
    h->prev=n;
    h=n;
    return h;
}

// FUNCTION TO INSERT NEW NODE AT LAST POSITION

node *ins_last(node *h)
{
    node *n,*z;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter data for new node:");
    scanf("%d",&n->data);
    n->next=n->prev=NULL;
    for(z=h;z->next!=NULL;z=z->next);
    z->next=n;
    n->prev=z;
    return h;
}

//FUNCTION TO INSERT NEW NODE AT POSITION BEFORE

node *ins_pos_before(node *h)
{
    int c=0,pos;
    node *n,*z;
    n=(node *)malloc(sizeof(node));
    printf("\n Enter data for new node:");
    scanf("%d",&n->data);
    n->next=n->prev=NULL;
    printf("\n Enter position: ");
    scanf("%d",&pos);
    for(z=h;z!=NULL;z=z->next)
    {
        c++;
        if(c==pos-1)
        {
            n->next=z->next;
            z->next->prev=n;
            z->next=n;
            n->prev=z;
            break;
        }
    }
    return h;
}

node *del_first(node *h)
{
    node *t;
    t = h;
    h = h->next;
    free(t);
    h->prev=NULL;
    return h;
}

node *del_last(node *h)
{
    node *z, *t;
    for (z = h; z->next->next != NULL; z = z->next);
    t = z->next;
    z->next = NULL;
    free(t);
    return h;
}

node *del_pos(node *h)
{
    int c=0, pos;
    node *z,*t;
    printf("\n Enter position: ");
    scanf("%d",&pos);

    for (z = h; z!=NULL; z=z->next)
    {
        c++;
        if (c==pos-1)
        {
            t=z->next;
            z->next=t->next;
            t->next->prev=z;
            free(t);
            break;
        }
    }
   return h; 
}

// TRAVERSE

void traverse(node *h)
{
    node *z;
    for (z = h; z->next != NULL; z = z->next)
        printf("%5d", z->data);
    printf("%5d", z->data);
    printf("\n");
    while (z != NULL)
    {
        printf("%5d", z->data);
        z = z->prev;
    }
    printf("\n");
}

node *concate(node *a , node *b)
{
    node *z;
    for(z=a;z->next!=NULL;z=z->next);
    z->next=b;
    b->prev=z;
    return a;
}

node *sort(node *h)
{
    node *i,*j;
    int temp;

    for(i=h;i->next!=NULL;i=i->next)
    {
        for (j=i->next;j!=NULL;j=j -> next)
        {
            if(i->data > j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data = temp;
            }
        }
        
    }
    return h;
}

node *reverse(node*h)
{
    node *a,*b,*c;
    a=h;
    b=a->next;
    c=b->next;
    a->next=NULL;
    a->prev=b;
    while (b!=NULL)
    {
        b->next=a;
        b->prev=c;
        a=b;
        b=c;
        if(c!=NULL)
            c=c->next;
    }
    h->next=NULL;
    h=a;
    return h;
}



int main()
{
    node *h;
    h = create();
    traverse(h);

    h=reverse(h);
    traverse(h);

    // h=ins_first(h);
    // traverse(h);

    // h=ins_last(h);
    // traverse(h);

    // h=ins_pos_before(h);
    // traverse(h);

    // h=del_first(h);
    // traverse(h);

    // h=del_last(h);
    // traverse(h);

    // h=del_pos(h);
    // traverse(h);

    // node *p,*q;

    // p=create();
    // traverse(p);

    // q=create();
    // traverse(q);

    // p=concate(p,q);
    // traverse(p);

    // p=sort(p);
    // traverse(p);
    return 0;
}