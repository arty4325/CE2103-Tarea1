//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_LISTASIMPLE_H
#define CE2103_TAREA1_LISTASIMPLE_H
#include "Node.h"
#include "Collector.h"


/**
 * @authors Jorge Guillen y Oscar Acuna
 *
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
    void printList();
    //void* operator new(size_t size, int value);
    //void operator delete(void* ptr) noexcept;

};
#endif //CE2103_TAREA1_LISTASIMPLE_H
