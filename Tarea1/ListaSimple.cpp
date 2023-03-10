//
// Created by jorge on 09/03/23.
//
#include "Node.h"
#include "ListaSimple.h"
#include <iostream>


using namespace std;


ListaSimple::ListaSimple() {
    this->head = nullptr;
}
Node* ListaSimple::getHead() {
    return this->head;
}
void ListaSimple::setHead(Node* newHead) {
    this->head = newHead;
}
void ListaSimple::insertHead(int value){
    Node* newNode = new Node(value);
    newNode -> next = this -> head;
    this -> head = newNode;
}

void ListaSimple::deleteHead(){
    if(head != nullptr){
        Node* temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
    }

}
void ListaSimple::printList(){
    Node* current = this->head;
    while(current != nullptr){
        cout << current->value << endl;
        current = current -> next;
    }
}

