//
// Created by jorge on 09/03/23.
//
#include "Node.h"
#include "ListaSimple.h"
#include <iostream>
#include "Collector.h"

using namespace std;

ListaSimple::ListaSimple() {
    this->head = nullptr;
    Collector collector;
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
void* ListaSimple::operator new(size_t size, int value){
    if (collector.isEmpty() == 0){
        Node* newNode = new Node(value);
        void* ptr = static_cast<void*>(newNode);
        return ptr;
    } else{
        Node* newNode = collector.deleteDirections();
        newNode->modifyNode(value);
        newNode -> next = head;
        head = newNode;
    }
}

void ListaSimple::operator delete(void* ptr) noexcept{

}
void ListaSimple::printList(){
    Node* current = this->head;
    while(current != nullptr){
        cout << current->value << endl;
        current = current -> next;
    }
}