
#include <iostream>
#include "linkedlist.cpp"
int main(){
    linkedlist L1;
    L1.isEmpty(); 
    L1.addToTail(15);
    L1.traverse();
    L1.addToHead(8);
    L1.traverse();
    L1.addToTail(25);
    L1.traverse();
    L1.addToTail(56);
    L1.traverse();
    Node* predecessor=L1.retrieve(25);
    L1.add(33,predecessor);
    L1.traverse();
    Node* predecessor2=L1.retrieve(33);
    L1.add(51,predecessor2);
    L1.traverse();
    L1.removeFromHead();
    L1.traverse();
    L1.remove(42);
    L1.traverse();
    L1.search(44);
    L1.search(56);
    L1.isEmpty();
    
    return 0;
    
}
