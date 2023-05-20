#include <iostream>
#include "../include/ArrayBST.h"

int main()
{
    ArrayBinarySearchTree a;
    std::cout << "The tree is empty :" << a.isEmpty() << std::endl;
    a.add(7, 1);
    a.add(3, 2);
    a.add(19, -1);
    a.add(22, -1);
    
    a.add(67, -1);
    a.add(29, -1);
    a.add(39,9);
    a.remove(17);
    
    a.inorder();
    a.remove(19);
    a.inorder();
    a.remove(22);
    a.inorder();
    a.remove(3);
    a.inorder();
}
