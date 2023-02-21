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

int RSum(struct Node *p)
{
    if (p != NULL)
    {
        return RSum(p->next) + p->data;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int A[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    create(A, 10);

    cout << "Sum of Linked List for RSum Function is: ";
    printf("%d", RSum(first));
    cout << endl;

    return 0;
}