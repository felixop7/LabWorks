#include "Graph.h"
#include <iostream>
using namespace std;

int main(){
    Graph G;
    if(G.isEmpty()){
        cout<<"The Graph is empty."<<endl;
    }
    else{
        cout<<"The Graph isn't empty."<<endl;
    }
    G.addVertex(2);
    G.addVertex(4);
    G.addVertex(6);
    if(G.isEmpty()){
        cout<<"The Graph is empty."<<endl;
    }
    else{
        cout<<"The Graph isn't empty."<<endl;
    }
    G.numVertices();
    G.addEdge(2,4);
    G.numEdges();
    G.removeVertex(5);
    G.numVertices();
    cout<<G.inDegree(2);
    cout<<G.outDegree(2);
    cout<<G.outDegree(6);
    cout<<G.degree(2);
    int * neighbours = G.neighbours(2);
    int i=0;
    while (*(neighbours + i) != -1 && i < 20) {
                std::cout << *(neighbours + i) << " ";
                i++;
    }
}
