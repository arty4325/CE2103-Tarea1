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
        cout << "Se creo nueva direccion " << endl;
        void * p = ::operator new(size);
        cout << p << " NUEVO" << endl;
        return p;
    } else {
        cout << "Se hizo uso de una direccion vieja " << endl;
        void * p = reinterpret_cast<void *>(collector.deleteDirections());
        cout << p << " VIEJO" << endl;
        return p;
    }
}

void Node::operator delete(void* ptr) noexcept{
    collector.addDirections(reinterpret_cast<int &>(ptr));
    free(ptr);
}


