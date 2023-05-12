#include <iostream>
#include "arraystack.cpp"
#include "linkedliststack.cpp"

using namespace std;

int main(){
    cout<<"The Array Stack is \n";

    arraystack s(5);

    cout<<"To check isEmpty ??\n";
    if(s.isEmpty()){

        cout<<"Here, Stack is empty\n";
    }else{
        cout<<"Here, Stack is not empty\n";
    }

    s.push(1);

    cout<<"Push data in stack\n";
    cout<<"To check isEmpty??\n";
    if(s.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Here, Stack is not empty\n";
    }


    s.push(9);
    s.push(3);
    s.push(7);
    s.push(1);

    cout<<"To check isFull??\n";
    if(s.isFull()){
        cout<<"Stack is full\n";
    }else{
        cout<<"Stack isn't full\n";
    }


    cout<<"To pop data from the stack\n";
    cout<<s.pop()<<endl;
    cout<<"Checking isFull\n";
    if(s.isFull()){
        cout<<"Stack is full\n";
    }else{
        cout<<"Stack isn't full\n";
    }


    cout<<"To Check top data\n";
    cout<<s.viewtop()<<endl;



    cout<<"LinkedList Stack\n";
    linkedliststack s1;
    cout<<"Checking isEmpty\n";
    if(s1.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Stack isn't empty\n";
    }


    s1.push(6);
    cout<<"Pushing data to stack\n";
    cout<<"Checking isEmpty?\n";
    if(s1.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Stack isn't empty\n";
    


    cout<<"Pushing data to the stack\n";
    s1.push(0);
    s1.push(3);
    s1.push(1);
    s1.push(8);
    cout<<"Poping data from the stack\n";
    cout<<s1.pop()<<endl;

    cout<<"Checking top data\n";
    cout<<s1.viewtop()<<endl;


    return 0;
}