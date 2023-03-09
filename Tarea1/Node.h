//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_NODE_H
#define CE2103_TAREA1_NODE_H

#include <cstddef>
#include "Collector.h"

class Node{
public:
    int value;
    Node* next;
    Node(auto value);
    void* operator new(size_t size);
    void operator delete(void* ptr) noexcept;
    void checkNode();
    int* checkPointer();
    void modifyNode(int value);
private:
    static Collector collector; // define collector as a private member of the class
};



#endif //CE2103_TAREA1_NODE_H
