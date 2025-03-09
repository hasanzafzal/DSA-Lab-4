#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#define maxQue 100

class Queue
{
private:
    int items[maxQue];
    int front, rear, count;

public:
    Queue();
    int IsEmpty();
    int IsFull();
    void Insert(int newItem);
    void Remove(int& item);
    int Front();
    int Back();
};

#endif
