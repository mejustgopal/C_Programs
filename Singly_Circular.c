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
    head->next = head;
    q = head;
    printf("\n More(Y/N)");
    ch = getche();
    while (ch == 'Y')
    {
        r = (node *)malloc(sizeof(node));
        printf("\n Enter data: ");
        scanf("%d", &r->data);
        r->next = head;
        q->next = r;
        q = r;
        printf("\n More(Y/N)");
        ch = getche();
    }
    return head;
}

void traverse(node *h)
{
    node *z;
    for (z = h; z->next != h; z = z->next)
        printf("%5d", z->data);
    printf("%5d", z->data);

    printf("\n");
}

node *ins_first(node *h)
{
    node *n, *z;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data for new node : ");
    scanf("%d", &n->data);
    n->next = NULL;
    for (z = h; z->next != h; z = z->next);
    n->next = h;
    h = n;
    z->next = h;
    return h;
}

node *ins_last(node *h)
{
    node *n, *z;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data for new node : ");
    scanf("%d", &n->data);
    n->next = NULL;
    for (z = h; z->next != h; z = z->next);
    z->next = n;
    n->next=h;
    return h;
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
    for (z = h; z->next != h; z = z->next)
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

node *del_first(node *h)
{
    node *z,*t;
    for(z=h;z->next!=h;z=z->next);
    t = h;
    h = h->next;
    z->next=h;
    free(t);
    return h;
}

node *del_last(node *h)
{
    node *z, *t;
    for (z = h; z->next->next!=h; z = z->next);
    t = z->next;
    z->next = h;
    free(t);
    return h;
}

// node *merge(node *a, node *b)
// {
//     node *t,*p,*q;
//     p=a;
//     q=b;
//     while(p!=NULL || q!=NULL)
//     {
//         while(p->data<q->data && p!=NULL && q!=NULL)
//         {
//             t=p;
//             p=p->next;
//         }
//         t->next=q;
//         while(q->data<p->data && p!=NULL && q!=NULL)
//         {
//             t=q;
//             q=q->next;
//         }
//         t->next=p;
//     }
//     if(a->data<b->data)
//         return a;
//     else
//         return b;
// }

int main()
{
    node *h;
    h = create();
    traverse(h);
    h=ins_first(h);
    traverse(h);
    h=ins_last(h);
    traverse(h);
    h=insert_posb(h);
    traverse(h);
    h=del_last(h);
    traverse(h);
    
    // node *p,*q;
    // p=create();
    // traverse(p);
    // q=create();
    // traverse(q);
    // p=merge(p,q);
    // traverse(p);
    return 0;
}
