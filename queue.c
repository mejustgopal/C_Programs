#include <stdio.h>

#define size 5
int a[size], f = -1, r = -1;

void insertq(int val)
{
    if (f == 0 && r == size - 1)
    {
        printf("Fail");
        return;
    }
    else if (f == -1 && r == -1)
    {
        f++;
        r++;
        a[r] = val;
    }
    else
    {
        r++;
        a[r] = val;
    }
}

void deleteq()
{
    if (f == -1 && r == -1)
    {
        printf("Empty");
        return;
    }
    else if (f == r)
        f = r = -1;
    else
        f++;
}

void showq()
{
    int i;
    if (f == -1 && r == -1)
    {
        printf("Empty");
        return;
    }
    for (i = f; i <= r; i++)
        printf("%5d", a[i]);
}

int main()
{
    insertq(10);
    insertq(20);
    insertq(30);
    insertq(40);
    insertq(50);
    showq();
    deleteq();
    showq();
    return 0;
}