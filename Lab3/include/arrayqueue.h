#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "queue.h"

class arrayqueue:public queue{
    public:
    int size;
    int front;
    int back;
    
    int *array;
    arrayqueue(int r):size(r) {
        array=new int[size];
        front=-1;
        back=-1;
    }

    void enQueue(int item);
    int deQueue();
    bool isEmpty();
    bool isFull();
    int viewFront();
    int viewBack();
    void display();
};

#endif