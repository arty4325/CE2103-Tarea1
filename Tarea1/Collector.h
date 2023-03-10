//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_COLLECTOR_H
#define CE2103_TAREA1_COLLECTOR_H
#include "Node.h"

/**
* @file Collector.h
* @authors Jorge Guillén y Oscar Acuña
* @brief En esta header se crea la clase Collector
* @version 0.1
* @date 10-3-2023
*
* @copyright Copyright (c) 2023
*/
class Collector{
private:
    Node* head;
public:
    Collector();
    void addDirections(int &Direction);
    //int checkAvailableDirections();
    Node* deleteDirections();
    bool isEmpty();
};
#endif //CE2103_TAREA1_COLLECTOR_H
