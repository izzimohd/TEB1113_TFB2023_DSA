/*
ID=22011232
Name: Izzi Rafiqie Bin Mohd Ali Hanafiah
*/
#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* prev;
    Node(string data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

int main() {
    Node* node1 = new Node("Ali");
    Node* node2 = new Node("Alicia");
    Node* node3 = new Node("Hamza");

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;

    cout << "before deletion: ";
    Node* current = node1;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

     
    node1->next = node3;
    node3->prev = node1;
    delete node2;

    cout << "after deletion: ";
    current = node1;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    
    current = node1;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
