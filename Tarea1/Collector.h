//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_COLLECTOR_H
#define CE2103_TAREA1_COLLECTOR_H
#include "Node.h"


class Collector{
private:
    Node* head;
public:
    Collector();
    void addDirections(int &Direction);
    //int checkAvailableDirections();
    int* deleteDirections();
    bool isEmpty();
};
#endif //CE2103_TAREA1_COLLECTOR_H
