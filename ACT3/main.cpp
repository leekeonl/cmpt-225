#include<iostream>
#include"LinkedList.h"


int main() {
	LinkedList L;
	L.insert(1);
	L.insert(2);
	L.insert(3);
	L.insert(4);
	L.insert(5);
    L.insert(11);   
    L.insert(11);
	L.insert(6);
//  L.insert(11);
//    L.insert(11);
//    L.insert(11);
    

	L.print();
    
//    
    L.remove(6);

	L.print();
    
    L.remove(11);
    L.print();
     L.remove(2);
    L.print();

	return 0;
}
