#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "stack.h"
class arraystack:public stack{
    public:
    int *top;
    int size,count;


    arraystack(int s){
        size=s;
        top=new int[size];
        count=0;
    }


    void push(int item);
    int pop();
    bool isEmpty();
    bool isFull();
    int viewtop();
};


#endif