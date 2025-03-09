#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include <queue>
#include <stack>
#include <iostream>
using namespace std;

class QueueManipulator 
{
public:
    void enque(queue<int>& q, int x); 
    void deque(queue<int>& q); 
    int size(const queue<int>& q); 
    int front(const queue<int>& q); 
    void reverseKElements(queue<int>& q, int k); 
};
#endif