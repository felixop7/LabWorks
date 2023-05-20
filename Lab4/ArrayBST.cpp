#include <iostream>
#include "ArrayBST.h"
using namespace std;

bool arraytree::isEmpty(){
    if(root[1]==0){
        return true;
    }
    return false;
};

void arraytree::add(int value){
    int temp = 1;
    while(true){
        if(root[temp]==0){
            root[temp]=value;
            return;
        }else if(root[temp]>value){
            temp=temp*2;
        }else{
            temp=temp*2+1;
        }
    }
};
void arraytree::remove(int value){
int temp = 1;
    while(temp<size){
        if(root[temp]==value){
            break;
        }else if(root[temp]==0){
            return;
        }else if(root[temp]>value){
            temp=temp*2;
        }else if(root[temp]<value){
            temp=temp*2+1;
        }
    }
    if(root[temp*2]==0 && root[temp*2+1]==0){
        root[temp]=0;
        return;
    }else if(root[temp*2]!=0 && root[temp*2+1]==0){
        while(true){
            root[temp]=root[temp*2+1];
            temp=temp*2+1;

        }
    }else if(root[temp*2]==0 && root[temp*2+1]!=0){

    }else{

    }
};
bool arraytree::search(int value){
    int temp = 1;
    while(temp<size){
        if(root[temp]==value){
            return true;
        }else if(root[temp]>value){
            temp=temp*2;
        }else{
            temp=temp*2+1;
        }
    }
    return false;
}
int arraytree::min(int value){
    int temp = 1;
    int m;
    while(temp<size){
        m=root[temp];
        temp=temp*2;
        if (root[temp]==0){
            return m;
        }
    }
};

int arraytree::max(int value){
    int temp = 1;
    int s;
    while(temp<size){
        s=root[temp];
        temp=temp*2+1;
        if (root[temp]==0){
            return s;
        }
    }
};