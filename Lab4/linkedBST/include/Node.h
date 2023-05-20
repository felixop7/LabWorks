#pragma once

#include <iostream>

class Data {
public:
    int key;
    int value;
    Data() {}
    Data(int key, int value) : key(key), value(value) {}
};

class Node {
    public:
    Data data;
    Node* leftChild;
    Node* rightChild;
    Node() {
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
    Node(int key, int value) {
        data.key = key;
        data.value = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};