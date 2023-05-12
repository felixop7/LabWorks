#ifndef STACK_H
#define STACK_H

class stack{
    
    public:
    virtual void push(int item)=0;
    virtual int pop()=0;
    virtual bool isEmpty()=0;
    virtual int viewtop()=0;
};


#endif