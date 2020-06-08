#include  <iostream>
#include "BinarySearchTree2.h"
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
    cout << BST.countDeep(1) << endl;

    return 0;
}