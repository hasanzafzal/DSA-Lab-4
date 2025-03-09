#include "queue.h"
#include <iostream>
using namespace std;

int main() 
{
    Queue q;
    for (int i = 1; i <= 10; ++i)
    {
        q.Insert(i);
        cout << "Inserted: " << i << endl;
        cout << "Front: " << q.Front() << ", Back: " << q.Back() << endl;
    }

    for (int i = 1; i <= 10; ++i) 
    {
        int item;
        cout << "\nBefore removal: Front: " << q.Front() << ", Back: " << q.Back() << endl;
        q.Remove(item);
        cout << "Removed: " << item << endl;
        if (!q.IsEmpty()) 
        {
            cout << "After removal: Front: " << q.Front() << ", Back: " << q.Back() << endl;
        }
    }

    return 0;
}