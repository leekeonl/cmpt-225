#include <iostream>
#include "AvlTreeB.h"
using namespace std;

int main()
{  
    AvlTree<int> AVL;
    AVL.insert(2);
    cout << endl;
    AVL.insert(1);
    cout << endl;
    AVL.insert(4);
    cout << endl;
    AVL.insert(3);
    cout << endl;
    AVL.insert(6);
    cout << endl;
    AVL.insert(5);
    cout << endl;
    AVL.insert(7);
    cout << endl;
    AVL.insert(8);
    cout << endl;
    AVL.insert(9);
    cout << endl;

    cout << "Checking removal of AVL" << endl;
    AVL.makeEmpty();
    AVL.insert(5);
    cout << endl;
    AVL.insert(3);
    cout << endl;
    AVL.insert(10);
    cout << endl;
    AVL.insert(4);
    cout << endl;
    AVL.insert(8);
    cout << endl;
    AVL.insert(12);
    cout << endl;
    AVL.insert(2);
    cout << endl;
    AVL.insert(7);
    cout << endl;
    AVL.insert(9);
    cout << endl;
    AVL.insert(11);
    cout << endl;
    AVL.insert(13);
    cout << endl;
    AVL.insert(1);
    cout << endl;
    AVL.insert(6);
    cout << endl;
    AVL.insert(17);
    cout << endl;
    cout << "Removing 9" << endl;
    AVL.remove(9);
    cout << endl;
    AVL.printTree();

    return 0;
}