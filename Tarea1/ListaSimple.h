//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_LISTASIMPLE_H
#define CE2103_TAREA1_LISTASIMPLE_H
#include "Node.h"

class ListaSimple{
private:
    Node* head;
public:
    ListaSimple();
    Node* getHead();
    void setHead(Node* newHead);
    void insertHead(int value);
    void printList();
};
#endif //CE2103_TAREA1_LISTASIMPLE_H
