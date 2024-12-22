#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} node;

node *create()
{
    node *head, *q, *r;
    char ch;
    head = (node *)malloc(sizeof(node));
    printf("\n Enter data: ");
    scanf("%d", &head->data);
    head->next = NULL;
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
        q = r;
        printf("\n More(Y/N)");
        ch = getche();
    }
    return head;
}

node *insert_posb(node *h)
{
    int c = 0, pos;
    node *z, *n;
    n = (node *)malloc(sizeof(node));
    printf("\n Enter data for new node");
    scanf("%d", &n->data);
    n->next = NULL;
    printf("\n Enter position: ");
    scanf("%d", &pos);
    for (z = h; z != NULL; z = z->next)
    {
        c++;
        if (c == pos - 1)
        {
            n->next = z->next;
            z->next = n;
            break;
        }
    }
    return h;
}

node *ins_last(node *h)
{
    node *n, *z;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data for new node : ");
    scanf("%d", &n->data);
    n->next = NULL;
    for (z = h; z->next != NULL; z = z->next);
    z->next = n;
    return h;
}

node *ins_first(node *h)
{
    node *n;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data for new node : ");
    scanf("%d", &n->data);
    n->next = NULL;
    n->next = h;
    h = n;
    return h;
}

void traverse(node *h)
{
    while (h != NULL)
    {
        printf("%5d", h->data);
        h = h->next;
    }
    printf("\n");
}

node *del_first(node *h)
{
    node *t;
    t = h;
    h = h->next;
    free(t);
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
            free(t);
            break;
        }
    }
   return h; 
}

node *concate(node *a , node *b)
{
    node *z;
    for(z=a;z->next!=NULL;z=z->next);
    z->next=b;
    return a;
}

node *reverse(node*h)
{
    node *a,*b,*c;
    a=h;
    b=a->next;
    c=b->next;
    while (b!=NULL)
    {
        b->next=a;
        a=b;
        b=c;
        if(c!=NULL)
            c=c->next;
    }
    h->next=NULL;
    h=a;
    return h;
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

int main()
{
    node *h;
    h = create();
    traverse(h);
    // h = ins_first(h);
    // traverse(h);
    // h = ins_last(h);
    // traverse(h);
    // h = insert_posb(h);
    // traverse(h);
    // h = del_pos(h);
    // h=reverse(h);
    // traverse(h);
    h=sort(h);
    traverse(h);

    //TWO NODES ARE CREATED AND TRAVERSED HERE
    // node *p,*q;
    // p=create();
    // traverse(p);
    // q=create();
    // traverse(q);
    // p=concate(p,q);
    // traverse(p);

    return 0;
}