//
// Created by jorge on 09/03/23.
//
/**
* @file ListaSimple.cpp
* @authors Jorge Guillén y Oscar Acuña
* @brief En esta clase se modifican los métodos de la clase ListaSimple, la cual permite instanciar listas enlazadas
* @version 0.1
* @date 10-3-2023
*
* @copyright Copyright (c) 2023
*/

#include "Node.h"
#include "ListaSimple.h"
#include <iostream>


using namespace std;

/**
 * @brief Método constructor de ListaSimple
 */
ListaSimple::ListaSimple() {
    this->head = nullptr;
}
/**
 * @brief Permite obtener el head de una lista
 * @return Retorna el head de la lista
 */
Node* ListaSimple::getHead() {
    return this->head;
}
/**
 * @brief Permite cambiar el valor de head
 * @param newHead Nuevo valor que tomará head
 */
void ListaSimple::setHead(Node* newHead) {
    this->head = newHead;
}
/**
 * @brief Método que permite añadir nuevos nodos a la lista
 * @param value Valor que se contendrá en el nodo creado
 */
void ListaSimple::insertHead(int value){
    Node* newNode = new Node(value);
    newNode -> next = this -> head;
    this -> head = newNode;
}

void ListaSimple::deleteHead(){
    if(head != nullptr){
        Node* temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
    }
}
void ListaSimple::printList(){
    Node* current = this->head;
    while(current != nullptr){
        cout << current->value << endl;
        current = current -> next;
    }
}

