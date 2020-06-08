#include  <iostream>
#include "BinarySearchTree1.h"
using namespace std;

int main()
{
    BinarySearchTree<int> BST;
    BST.insert(4);
    BST.insert(2);
    BST.insert(1);
    BST.insert(3);
    BST.insert(6);
    BST.insert(7);
    BST.insert(5);


//expect return 4
    cout << BST.count_leaves() << endl;

    return 0;
}