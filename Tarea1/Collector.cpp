//
// Created by jorge on 09/03/23.
//

#include "Collector.h"
#include "Node.h"
#include <iostream>
using namespace std;

Collector::Collector() {
    this -> head = nullptr;
};
void Collector::addDirections(int &value) {
    Node* newNode = new Node(value);
    newNode -> next = this -> head;
    this -> head = newNode;
}
Node* Collector::deleteDirections(){
    Node* temp = head;
    this -> head = head -> next;
    return temp;
}

bool Collector::isEmpty(){
    int Count = 0;
    Node* current = this -> head;
    while(current != nullptr){
        Count += 1;
        current = current -> next;
    }
    if(Count == 0){
        return false;
    }
    else {
        return true;
    }
}


/*
void Collector::addDirections(int &Direction) {
    int DirectionPtr = Direction;
    Node *newNode = new Node(DirectionPtr);
}
int checkAvailableDirections(){
    Node* Head = collector->getHead();
    while(Head != null){
        int* valor = Head->valor;
        if(valor != null){
            return *valor;
        }
        Head = Head->next;
    }

}
 */