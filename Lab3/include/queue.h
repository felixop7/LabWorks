#ifndef QUEUE_H
#define QUEUE_H

class queue{
    public:
    virtual void enQueue(int item)=0;
    virtual int deQueue()=0;
    virtual bool isEmpty()=0;
    virtual int viewFront()=0;
    virtual int viewBack()=0;
    virtual void display()=0;
};

#endif