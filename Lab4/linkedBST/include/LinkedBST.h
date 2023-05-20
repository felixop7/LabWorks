#pragma once

#include "Node.h"

class LinkedBST
{
public:
    Node *Root;
    LinkedBST() : Root(NULL) {}

    bool isEmpty();
    Node* addBST(Node* root, int key, int value);
    Node* searchBST(Node* root, int targetKey);
    Node *removeBST(Node *root, int keyToDelete);
    void traverse(Node* root);
};