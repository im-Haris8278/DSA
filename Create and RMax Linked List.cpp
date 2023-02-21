#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int RMax(struct Node *p)
{
    int x = 0, m = -32768;
    if (p == 0)
    {
        return m;
    }
    x = RMax(p->next);
    if (x > p->data)
    {
        return x;
    }
    else
    {
        return p->data;
    }
    // return x > p->data ? x : p->data;
}

int main()
{
    int A[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    create(A, 10);

    cout << "The Max Value of Linked List for RMax Function is: ";
    printf("%d", RMax(first));
    cout << endl;

    return 0;
}