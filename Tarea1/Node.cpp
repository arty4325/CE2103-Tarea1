//
// Created by jorge on 09/03/23.
//
/**
* @file Node.cpp
* @authors Jorge Guillén y Oscar Acuña
* @brief En esta clase se modifican los métodos de la clase Node, la cual permite generar posteriormente nodos para la lista
 * * @version 0.1
* @date 10-3-2023
*
* @copyright Copyright (c) 2023
*/

#include <iostream>
#include "Node.h"
#include "ListaSimple.h"
#include "Collector.h"
Collector collector;

using namespace std;
/**
 * @brief Método constructor de la clase Node
 * @param value Valor que tomará el nodo
 */
Node::Node(int value){
    this->value = value;
    this->next = nullptr;
}
/**
 * @brief Método que permite revisar la dirección de un nodo
 * @return Retorna el puntero de un nodo
 */
int* Node::checkPointer(){
    this->value = value;
    int* ptr = &value;
    return ptr;
}
/**
 * @brief Método para revisar el valor de un nodo
 */
void Node::checkNode(){
    cout<<this->value<<endl;
}
/**
 * @brief Método para modificar el valor de un nodo
 * @param value
 */
void Node::modifyNode(int value){
    this->value = value;
}
/**
 * @brief Método para asignar nuevos nodos según la disponibilidad de nodos en collector
 * @param size
 * @return
 */
void *Node::operator new(size_t size){
    if (!collector.isEmpty()){
        cout << "Se creo nueva direccion " << endl;
        void * p = ::operator new(size);
        cout << p << " NUEVO" << endl;
        return p;
    } else {
        cout << "Se hizo uso de una direccion vieja " << endl;
        void * p = reinterpret_cast<void *>(collector.deleteDirections());
        cout << p << " VIEJO" << endl;
        return p;
    }
}
/**
 * @brief Método para eliminar nodos y enviar las direcciones a collector
 * @param ptr
 */
void Node::operator delete(void* ptr) noexcept{
    collector.addDirections(reinterpret_cast<int &>(ptr));
    free(ptr);
}


