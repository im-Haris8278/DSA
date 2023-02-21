#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    // int n;

    // Add Elements to the Queue

    // cout << "Enter the Size of the Queue: ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cout << "Enter the Element: ";
    //     cin >> x;
    //     q.push(x);
    // }

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Original Queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Insert Element at a Specific Position

    q.push(10);
    q.push(20);
    q.push(30);

    int x, value;

    cout << endl;
    cout << "Enter the Position to Insert Value: ";
    cin >> x;

    cout << "Enter a Value to Insert: ";
    cin >> value;

    queue<int> temp;
    int i = 1;

    while (!q.empty())
    {
        if (i == x)
        {
            temp.push(value);
        }
        temp.push(q.front());
        q.pop();
        i++;
    }

    while (!temp.empty())
    {
        q.push(temp.front());
        temp.pop();
    }

    cout << endl;
    cout << "After Inserting Element at " << x << " Position: ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
