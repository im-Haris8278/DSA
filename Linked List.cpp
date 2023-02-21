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

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        cout << " ";
        printf("%d", p->data);
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int RCount(struct Node *p)
{
    if (p != NULL)
    {

        return RCount(p->next) + 1;
    }
    else
    {
        return 0;
    }
}

int sum(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
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

    cout << "The Linked List for Display Function is: ";
    display(first);
    cout << endl;

    cout << "The Linked List for RDisplay Function is: ";
    RDisplay(first);
    cout << endl;

    cout << "Length for Count Function is: ";
    printf("%d", count(first));
    cout << endl;

    cout << "Length for RCount Function is: ";
    printf("%d", RCount(first));
    cout << endl;

    cout << "Sum of Linked List for Sum Function is: ";
    printf("%d", sum(first));
    cout << endl;

    cout << "Sum of Linked List for RSum Function is: ";
    printf("%d", RSum(first));
    cout << endl;

    cout << "The Max Value in Linked List for Max Function is: ";
    printf("%d", max(first));
    cout << endl;

    cout << "The Max Value in Linked List for RMax Function is: ";
    printf("%d", RMax(first));
    cout << endl;

    return 0;
}