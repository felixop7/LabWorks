#include "AbstractBST.h"
#include <iostream>
using namespace std;
class arraytree : virtual public AbstractBST{
    public:
    int* root;
    int size;
    arraytree(){
        int n;
        cout<<"Enter the no. of elements you want in the tree?";
        cin>>n;
        size=n+1;
        root = new int[n+1];
        for ( int i=0; i<=size; i++){
            root[i]=0;
        }
    }

 bool isEmpty();
 void add(int value);
 void remove(int value);
 bool search(int value);
 int min(int value);
 int max(int value);
};


