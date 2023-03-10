//
// Created by jorge on 09/03/23.
//
#include <iostream>
#include "Node.h"
using namespace std;
Node::Node(int value){
    this->value = value;
    this->next = nullptr;
}
void Node::deleteNode(Node* direction){

}
void Node::checkNode(){
    cout<<this->value<<endl;
}
void Node::modifyNode(int value){
    this->value = value;
}
