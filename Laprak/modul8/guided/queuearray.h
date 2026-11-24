#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include <iostream>
using namespace std;

const int MAKSIMAL = 5;

struct queue
{
    int head;
    int tail;
    string data[MAKSIMAL];
};


bool isFull(queue Q);
bool isEmpty(queue Q);
void createQueue(queue &Q);
void enqueue(queue &Q, string nama);
void dequeue(queue &Q);
void viewQueue(queue Q);

#endif