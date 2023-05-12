#ifndef LinkedList_h
#define LinkedList_h


class Node{ 
    public:     

    int data;

    Node *next;

    Node(int d=0, Node *next=nullptr):data(d),next(next) {}     
    
};

class LinkedList{ 
    public:         

    Node *tail;

    LinkedList(Node *head=nullptr, Node *tail=nullptr):head(head), tail(tail) {}r

    bool isEmpty();     

    void addToHead(int data);  
    void addToTail(int data);
    void add(int data, Node *predecessor);

    void removeFromHead();     
    void remove(int data);

    Node* retrive(int data);   
    bool search(int data);     
    void traverse();      

};


#endif