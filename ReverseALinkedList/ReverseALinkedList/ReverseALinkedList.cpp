#include <iostream>
#include "Node.h"
using namespace std;
int main() {
	
    // Create the linked list 2->3->4->5
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    
    //head = head->insertAtLast(head, 6);
    //head = head->insertAtFront(head, 6);

    head->showAllNode(head);

	return 0;
}