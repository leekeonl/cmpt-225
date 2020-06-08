#include "LinkedList.h"
//#include <stdlib.h>

//// To be completed for exercise 4
//// Recursive helper method for remove(int)
//// ONLY CHANGE BODY OF THIS METHOD

//void LinkedList::remove(Node* nd,int val){
//    Node * current = nd;
//    Node * nextone = nd->next;
//
//    if(head->data == val){ 
//        cout << "deleting value of " << val << endl;
//        Node * oldhead = head;  
//        head = head->next;
//        delete oldhead;
//        return;
//    }
//    
//    if (nextone->data == val){
//        cout << "deleting value of " << val << endl;
//        current->next = nextone->next;
//		delete nextone;
//        return;
//    }
//
//    remove(current->next, val);
//    
//    if (nextone->next == NULL) return;
//
//}
void LinkedList::remove(Node* nd,int val){
//when we reach the end of the list it will start popping the recursive stack
    if (nd->next == NULL) { return; }
    //recursive call
    remove(nd->next, val);
    //when we return during the popping phase, the code resumes here 
    //checks the next nodes value and removes it if it matches
    //can't do this with the current node or we lose track of the previous node and can't reroute it's next pointer
    if (nd->next->data == val) {
        Node* temp = nd->next; //need to use temporary copy of the node or we'll lose track of it and can't delete it
        nd->next = temp->next;
        delete temp; //memory management
    }
    //special case for head node (needs to assign a new head)
    if (nd == head && nd->data == val) {
        Node* temp = nd;
        head = temp->next;
        delete temp;
    }

}
// Constructors and destructor
// Creates an empty list
LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	deleteList();
}
// Copy constructor and overloaded assignment operator not implemented

// Mutators------------------
// PARAM: val = value to be inserted
// POST: inserts val at the front of the list
void LinkedList::insert(int val)
{
	Node* newNode = new Node(val, head);
	head = newNode;
}

// PARAM: val = value to be removed from list
// POST: removes all incidences of val from list,
// Calls remove(Node*, int)
void LinkedList::remove(int val)
{
	remove(head, val);
}

// Helper method for destructor
// (and un-implemented overloaded assignment operator)
void LinkedList::deleteList()
{
	Node* temp = head;
	while (head != nullptr) {
		head = head->next;
		delete temp;
		temp = head;
	}
}

void LinkedList::print() {
	Node* current;
	current = head;
    int count =0;
    cout << "The current List" << endl;
	while (current != nullptr)
	{
        count++;
		cout << "the order is " <<count << " Current data is " <<current->data << endl;
		current = current->next;
	}
}