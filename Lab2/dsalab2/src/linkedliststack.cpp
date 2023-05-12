#include <iostream>
#include "LinkedList.cpp"
#include "linkedliststack.h"


void linkedliststack:: push(int item){
    lab2.addToHead(item);
};


int linkedliststack::pop(){
    int temp=lab2.head->data;
    lab2.removeFromHead();
    return temp;
};


bool linkedliststack:: isEmpty(){
    return lab2.isEmpty();
};


int linkedliststack:: viewtop(){
    return lab2.head->data;
};