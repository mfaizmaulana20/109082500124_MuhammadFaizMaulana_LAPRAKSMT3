#ifndef QUEUE_H 
#define QUEUE_H

#include <iostream>
#include <string>
using namespace std;


struct node 
{
    string nama;
    node *next;
};

struct queue 
{
    node *head;
    node *tail;
};

void CreateQueue(queue *Q);
bool IsEmpty(queue Q);
bool IsFull(queue Q);
void enQueue(queue &Q, const string &nama);
void deQueue(queue &Q);
void viewQueue(queue Q);
void clearQueue(queue &Q);
#endif
