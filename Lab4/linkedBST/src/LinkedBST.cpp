#include <iostream>
#include "LinkedBST.h"

bool LinkedBST::isEmpty() {
    return Root == NULL;
}

Node* LinkedBST::addBST(Node* root, int key, int value) {
    Node* newNode = new Node(key, value);

    if(root == NULL) {
        Root = newNode;
        return newNode;
    }
    if(key < root->data.key) {
        root->leftChild = addBST(root->leftChild, key, value);
    } else {
        root->rightChild = addBST(root->rightChild, key, value);
    }

    return root;
}

void LinkedBST::traverse(Node* root) {
    if(root == NULL) {
        return;
    }
    traverse(root->leftChild);
    std::cout << root->data.key << " ";
    traverse(root->rightChild);
}

Node* LinkedBST::searchBST(Node* root, int targetKey) {
    if(root == NULL) return NULL;
    if(root->data.key == targetKey) return root;
    if(root->data.key > targetKey) return searchBST(root->leftChild, targetKey);
    return searchBST(root->rightChild, targetKey);
}

Node* inorderSuccessor(Node* root) {
    Node* current = root;
    while(current && current->leftChild != NULL) {
        current = current->leftChild;
    }
    return current;
}

Node* LinkedBST::removeBST(Node* root, int keyToDelete) {
    
    if(keyToDelete < root->data.key) {
        root->leftChild = removeBST(root->leftChild, keyToDelete);
    }
    else if(keyToDelete > root->data.key) {
        root->rightChild = removeBST(root->rightChild, keyToDelete);
    } else {
        if(root->leftChild == NULL) {
            Node* temp = root->rightChild;
            delete root;
            return temp;
        } else if(root->rightChild == NULL) {
            Node* temp = root->leftChild;
            delete root;
            return temp;
        }

        Node* temp = inorderSuccessor(root->rightChild);
        root->data.key = temp->data.key;
        root->rightChild = removeBST(root->rightChild, temp->data.key);
    }
     return root;
}