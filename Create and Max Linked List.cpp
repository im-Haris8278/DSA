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

int max(struct Node *p)
{
    int m = -32768;
    while (p)
    {
        if (p->data > m)
        {
            m = p->data;
        }
        else
        {
            p = p->next;
        }
    }
    return m;
}

int main()
{
    int A[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    create(A, 10);

    cout << "The Max Value in Linked List for Max Function is: ";
    printf("%d", max(first));
    cout << endl;

    return 0;
}