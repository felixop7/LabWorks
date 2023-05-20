#include "ArrayBST.h"
#include "LinkedBST.h"

int main() {
    

    LinkedBST* bst = new LinkedBST();
    Node* root = NULL;

    root = bst->addBST(root, 4, 16);
    bst->addBST(root, 2, 4);
    bst->addBST(root, 1, 1);
    bst->addBST(root, 3, 9);
    bst->addBST(root, 5, 25);

    bst->traverse(root);
    std::cout << std::endl;

    bst->removeBST(root, 3);

    bst->traverse(root);
    std::cout << std::endl;


    if(bst->searchBST(root, 3)) std::cout << "Exists" << std::endl;
    else std::cout << "Does not exist" << std::endl;
}