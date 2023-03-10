//
// Created by jorge on 09/03/23.
//
#include <iostream>
#include "Node.h"
#include "ListaSimple.h"
#include "Collector.h"
Collector collector;

using namespace std;
Node::Node(int value){
    this->value = value;
    this->next = nullptr;
}


int* Node::checkPointer(){
    this->value = value;
    int* ptr = &value;
    return ptr;
}

void Node::checkNode(){
    cout<<this->value<<endl;
}
void Node::modifyNode(int value){
    this->value = value;
}


void *Node::operator new(size_t size){
    if (!collector.isEmpty()){
        void * p = ::operator new(size);
        return p;
    } else {
        void * p = reinterpret_cast<void *>(collector.deleteDirections());
        return p;
    }
}


