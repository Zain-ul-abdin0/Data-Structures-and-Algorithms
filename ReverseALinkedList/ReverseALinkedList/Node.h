#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }

    Node* insertAtLast(Node* head, int new_data) {
        Node* newNode = new Node(new_data);
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next=newNode;
        return head;
    }
     Node* insertAtFront(Node* head, int new_data) {
         Node* newNode = new Node(new_data);
         newNode->next = head;
         return newNode;
     }
     void showAllNode(Node* head) {
         while (head != nullptr) {
             cout << "Node Data :----->" << head->data<<endl;
             head = head->next;
         }
     }

};