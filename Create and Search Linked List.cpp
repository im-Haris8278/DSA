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

struct Node *LSearch(Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct Node *temp;
    int key;
    int A[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    create(A, 10);

    cout << "\nThe Numbers of Linked List are: ";
    display(first);
    cout << endl;

    cout << "\nEnter a Key to Find: ";
    cin >> key;

    temp = LSearch(first, key);
    if (temp != NULL)
    {
        printf("\nKey is Found %d", temp->data);
    }
    else
    {
        printf("\nKey not Found");
    }

    return 0;
}