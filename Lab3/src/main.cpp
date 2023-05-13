#include <iostream>
#include "arrayqueue.cpp"

using namespace std;

int main(){
    arrayqueue lab3(5);
    cout<<lab3.isEmpty()<<endl;
    lab3.enQueue(5);
    cout<<lab3.isEmpty()<<endl;
    lab3.enQueue(5);
    lab3.enQueue(2);
    lab3.enQueue(7);
    lab3.enQueue(10);
    cout<<lab3.isFull()<<endl;
    cout<<lab3.deQueue()<<endl;
    cout<<lab3.isFull()<<endl;
    lab3.enQueue(8);
    cout<<lab3.viewFront()<<endl;
    cout<<lab3.viewBack()<<endl;
    cout<<lab3.deQueue()<<endl;
    cout<<lab3.deQueue()<<endl;
    lab3.display();
    cout<<lab3.deQueue()<<endl;
    cout<<lab3.deQueue()<<endl;
    cout<<lab3.deQueue()<<endl;
    lab3.enQueue(6);
    lab3.enQueue(7);
    cout<<lab3.deQueue()<<endl;
    cout<<lab3.deQueue()<<endl;
    cout<<lab3.deQueue()<<endl;
    return 0;
}