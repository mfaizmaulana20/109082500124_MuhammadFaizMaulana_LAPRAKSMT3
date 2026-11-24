#include"queue.h"

void CreateQueue(queue *Q) 
{
    Q->head = nullptr;
    Q->tail = nullptr;
};

bool IsEmpty(queue Q) 
{
    return (Q.head == nullptr && Q.tail == nullptr);
};

bool IsFull(queue Q)
{
    int count = 0;
    node *nodeBantu = Q.head;

    while (nodeBantu != nullptr)
    {
        count++;
        nodeBantu = nodeBantu->next;
    }
    int const MAX = 20;

    return count >= MAX;
};

void enQueue(queue &Q, const string &nama) 
{
    if (IsEmpty(Q)) 
    {
        node *nodeBaru = new node;
        Q.head = Q.tail = nodeBaru;
    }
    else 
    {
        node *nodeBaru = new node;
        Q.tail->next = nodeBaru;
        Q.tail = nodeBaru;
    }
};

void deQueue(queue &Q) 
{
    if (IsEmpty(Q)) 
    {
        cout << "Queue Kosong!" << endl;
        return;
    }
    node *nodeHapus = Q.head;
    Q.head = Q.head->next;
    delete nodeHapus;

    if (Q.head == nullptr) 
    {
        Q.tail = nullptr;
    }
};

void viewQueue(queue Q)
{
    if (IsEmpty(Q))
    {
        cout << "Queue Kosong!" << endl;
        return;
    }

    node *nodeBantu = Q.head;

    while (nodeBantu != nullptr)
    {
        cout << nodeBantu->nama << " ";
        nodeBantu = nodeBantu->next;
    }

    cout << endl;
};

void clearQueue(queue &Q) 
{
    if (IsEmpty(Q)) 
    {
        cout << "Queue Kosong!" << endl;
        return;
    }
    else 
    {
        node *nodeHapus = Q.head;
        while (nodeHapus != nullptr) 
        {
            Q.head = Q.head->next;
            delete nodeHapus;
            nodeHapus = Q.head;
        }
        Q.tail = nullptr;
    }
};

