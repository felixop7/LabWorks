#include <iostream>
#include "../include/arrayqueue.h"

using namespace std;


void arrayqueue:: enQueue(int item){
    if(this->isFull()){
        return;
    }
    back=(back+1)%size;
    array[back]=item;
    if(front==-1){
        front=back;
    }
    return;
};


int arrayqueue::deQueue(){
    if(this->isEmpty()){
        return 0;
    }
    int temp=array[front];
    front=(front+1)%size;
    if(front==(back+1)%size){
        front=-1;
        back=-1;
    }
    return temp;
};

bool arrayqueue::isEmpty(){
    if(front==-1){
        return true;
    }
    return false;
};

bool arrayqueue::isFull(){
    if((back+1)%size==front){
        return true;
    }
    return false;
};

int arrayqueue::viewFront(){
    return array[front];
};

int arrayqueue::viewBack(){
    return array[back];
};

void arrayqueue::display(){
    int i; 
     if (isEmpty()) 
     cout<< "The Queue is empty."<<endl;
     else
{
    cout<<"The queue is : "<<endl;
    for (i=front; i!=back; i= (i+1)%size)
        cout<<array[i];
}
};

