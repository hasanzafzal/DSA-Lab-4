#include "queue.h"
using namespace std;

void QueueManipulator::enque(queue<int>& q, int x)
{
    q.push(x);
}

void QueueManipulator::deque(queue<int>& q) 
{
    if (!q.empty()) 
    {
        q.pop();
    }
    else 
    {
        cout << "Queue is empty! Cannot dequeue." << endl;
    }
}

int QueueManipulator::size(const queue<int>& q) 
{
    return q.size();
}

int QueueManipulator::front(const queue<int>& q) 
{
    if (!q.empty()) 
    {
        return q.front();
    }
    else 
    {
        cout << "Queue is empty!" << endl;
        return -1; 
    }
}

void QueueManipulator::reverseKElements(queue<int>& q, int k) 
{
    if (q.empty() || k <= 0 || k > q.size()) 
    {
        return;
	}
    stack<int> s;
    for (int i = 0; i < k; ++i) 
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) 
    {
        q.push(s.top());
        s.pop();
    }
    int qSize = q.size();
    for (int i = 0; i < qSize - k; ++i)
    {
        q.push(q.front());
        q.pop();
    }
}