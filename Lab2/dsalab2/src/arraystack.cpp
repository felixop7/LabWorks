#include <iostream>
#include "arraystack.h"

using namespace std;

void arraystack::push(int item){
    if(this->isFull()){
        cout<<"Already full..."<<endl;
        return;
    }
    *top=item;
    top=top+1;
    count++;
    return;
};

int arraystack::pop(){
    if(this->isEmpty()){
        cout<<"Stack empty..."<<endl;
        return 0;
    }
    int temp=*(top-1);
    top=top-1;
    count--;
    return temp;
};
bool arraystack::isEmpty(){
    if(count==0){
        return true;
    }
    return false;
};


bool arraystack::isFull(){
    if(count==size){
        return true;
    }
    return false;
};

int arraystack::viewtop(){
    return *(top-1);
};