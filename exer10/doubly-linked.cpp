#include <iostream>
#include "doubly-linked.h"
using namespace std;


List::List(void) {
    first = nullptr ;
}


List::~List(void) {
    
    Node* current = first;
    while (current!=nullptr ) {
        Node* next = current->next;
        delete current;
        current = next;

    }
    return;

}


void List::insert(int n){
    
    Node* newNode = new Node;
    newNode->val = n;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (first == nullptr) {
        first = newNode; 
        return;
    }

    Node* current = first;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
    
    return;
}

void List::reverse(void){
    Node* current = first;
    Node* temp = nullptr;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; 
    }
    if (temp != nullptr) {
        first = temp->prev;
    }
}

void List::print(void){
    Node* current = first;
 
    while (current!=nullptr) {
        cout<< current->val<<" ";
        current = current->next;
    }
    cout << endl;
    return;
}