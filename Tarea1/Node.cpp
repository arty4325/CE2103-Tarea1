//
// Created by jorge on 09/03/23.
//
#include <iostream>
#include "Node.h"
using namespace std;
Node::Node(auto value){
    Collector collector;
    this->value = value;
    this->next = nullptr;
}

void *Node::operator new(size_t size){
    bool check = collector.isEmpty();
    if(check){
        void * p = malloc(size);

    }
}

void Node::operator delete(void* ptr) noexcept{

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
