//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_LISTASIMPLE_H
#define CE2103_TAREA1_LISTASIMPLE_H
#include "Node.h"
#include "Collector.h"


/**
* @file ListaSimple.h
* @authors Jorge Guillén y Oscar Acuña
* @brief En esta header se crea la clase ListaSimple
* @version 0.1
* @date 10-3-2023
*
* @copyright Copyright (c) 2023
*/
class ListaSimple{
private:
    Node* head;
    static Collector collector;

public:
    ListaSimple();
    Node* getHead();
    void setHead(Node* newHead);
    void insertHead(int value);
    void deleteHead();
    void printList();
    //void* operator new(size_t size, int value);
    //void operator delete(void* ptr) noexcept;

};
#endif //CE2103_TAREA1_LISTASIMPLE_H
