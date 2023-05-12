#include <iostream>
#include "LinkedList.h"

using namespace std;
bool LinkedList::isEmpty(){
    if(head==nullptr){
        return true;
    }
    return false;
}

void LinkedList::addToHead(int data){
    head=new Node(data, head);
    if(tail==nullptr){
        tail=head;
    }
    return;
}

void LinkedList::addToTail(int data){
    Node *tail1=new Node(data);
    tail->next=tail1;
    tail=tail1;
    return;
}

void LinkedList::add(int data, Node *predecessor){
    predecessor->next=new Node(data, predecessor->next);
    if(tail==predecessor){
        tail=predecessor->next;
    }
    return;
}

void LinkedList::removeFromHead(){
    Node *todelete=head;
    head=head->next;
    delete[]todelete;
    return;
}

void LinkedList::remove(int data){
    if(head->data==data){
        Node* todelete=head;
        head=head->next;
        delete[]todelete;
        return;
    }
    Node* pre=head;
    int flag=0;
    while(flag!=1){
        if((pre->next)->data==data){
            Node* todelete=pre->next;
            pre->next=pre->next->next;
            if(tail==todelete){
                tail=pre;
            }
            delete[]todelete;
            return;
        }
        pre=pre->next;
        if(pre==nullptr){
            flag=1;
        }
    }
    
    return;
}

Node* LinkedList::retrive(int data){
    if(head->data==data){
        return head;
    }
    Node* pre=head;
    int flag=0;
    while(flag!=1){
        if((pre->next)->data==data){
            return pre->next;
        }
        if(pre->next==nullptr){
            return nullptr;
        }
        pre=pre->next;
    }
    return nullptr;
}


bool LinkedList::search(int data){
    Node* check=head;
    while(check!=nullptr){
        if(check->data==data){
            return true;
        }
        check=check->next;
    }
    return false;
}

void LinkedList::traverse(){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl<<endl;
    return;
}
