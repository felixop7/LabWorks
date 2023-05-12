#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H

#include "stack.h"
class linkedliststack:public stack {
    public:


    LinkedList lab2;


    void push(int item);
    int pop();
    bool isEmpty();
    int viewtop();
    
};

#endif