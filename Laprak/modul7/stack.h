#ifndef STACK_TABLE
#define STACK_TABLE
#include <iostream>
using namespace std;
const int MAX = 10;

struct stackTable
{
    int data[MAX];
    int top;
};

bool isEmpty(stackTable s);
bool isFull(stackTable s);
bool createStack(stackTable s);
bool push(stackTable &s, int angka);
bool pop(stackTable &s);
bool update(stackTable &s, int posisi);
bool view(stackTable s);
bool searchData(stackTable s, int data);
#endif
