//
// Created by jorge on 09/03/23.
//
/**
* @file Collector.cpp
* @authors Jorge Guillén y Oscar Acuña
* @brief En esta clase se modifican los métodos de la clase Collector, la cual corresponde a la lista que almacena las direcciones
* @version 0.1
* @date 10-3-2023
*
* @copyright Copyright (c) 2023
*/

#include "Collector.h"
#include "Node.h"
#include <iostream>
using namespace std;
/**
 * @brief Método constructor de Collector
 */
Collector::Collector() {
    this -> head = nullptr;
};
/**
 * @brief Este método añade las direcciones que se desean reciclar a la lista de Collector
 * @param value Puntero que contiene la dirección que se reciclará
 */
void Collector::addDirections(int &value) {
    Node* newNode = new Node(value);
    newNode -> next = this -> head;
    this -> head = newNode;
}
/**
 * @brief Este método extrae una de las direcciones que se pueden reutilizar
 * @return Devuelve la dirección que se empleará
 */
Node* Collector::deleteDirections(){
    Node* temp = head;
    this -> head = head -> next;
    return temp;
}

/**
 * @brief Método que comprueba si Collector está vacío o no
 * @return Valor booleano
 */
bool Collector::isEmpty(){
    int Count = 0;
    Node* current = this -> head;
    while(current != nullptr){
        Count += 1;
        current = current -> next;
    }
    if(Count == 0){
        return false;
    }
    else {
        return true;
    }
}

