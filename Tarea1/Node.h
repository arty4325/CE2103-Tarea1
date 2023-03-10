//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_NODE_H
#define CE2103_TAREA1_NODE_H

#include <cstddef>

/**
* @file Node.h
* @authors Jorge Guillén y Oscar Acuña
* @brief En esta header se crea la clase Node
* @version 0.1
* @date 10-3-2023
*
* @copyright Copyright (c) 2023
*/
class Node{
public:
    int value;
    Node* next;
    Node(int value);
    void* operator new(size_t size);
    void operator delete(void* ptr) noexcept;
    void checkNode();
    int* checkPointer();
    void modifyNode(int value);
};



#endif //CE2103_TAREA1_NODE_H
