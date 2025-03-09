#include "queue.h"
using namespace std; 

Queue::Queue() 
{
    count = 0;
    front = 0;
    rear = 0;
}

int Queue::IsEmpty() 
{
    return (count == 0);
}

int Queue::IsFull() 
{
    return (count == maxQue);
}

void Queue::Insert(int newItem) 
{
    if (IsFull()) 
    {
        cout << "Queue is full.\n";
    }
    else {
        items[rear] = newItem;
        rear = (rear + 1) % maxQue;
        ++count;
    }
}

void Queue::Remove(int& item) 
{
    if (IsEmpty()) 
    {
        cout << "Underflow: Queue is empty.\n";
    }
    else 
    {
        item = items[front];
        front = (front + 1) % maxQue;
        --count;
    }
}

int Queue::Front() 
{
    if (IsEmpty()) 
    {
        cout << "Underflow: Cannot access front, queue is empty.\n";
        return -1;
    }
    return items[front];
}

int Queue::Back() 
{
    if (IsEmpty()) 
    {
        cout << "Underflow: Cannot access back, queue is empty.\n";
        return -1;
    }
    int backIndex = (rear - 1 + maxQue) % maxQue;
    return items[backIndex];
}