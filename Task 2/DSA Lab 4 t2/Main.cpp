#include "queue.h"
#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    QueueManipulator qm;
    queue<int> q;
    int n, k, element;
    cout << "Enter number of elements in queue: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) 
    {
        cin >> element;
        qm.enque(q, element);
    }
    cout << "Enter value of k: ";
    cin >> k;
    if (k > 0 && k <= qm.size(q)) 
    {
        qm.reverseKElements(q, k);
        cout << "Queue after reversing first " << k << " elements: ";
        while (!q.empty()) 
        {
            cout << qm.front(q) << " ";
            qm.deque(q);
        }
        cout << endl;
    }
    else 
    {
        cout << "Invalid value of k!" << endl;
    }

    return 0;
}