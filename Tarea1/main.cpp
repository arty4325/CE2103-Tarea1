/**
 * @file main.cpp
 * @authors Jorge Guillén y Oscar Acuña
 * @brief En esta clase se lleva a cabo la ejecución principal del programa
 * @version 0.1
 * @date 10-3-2023
 *
 * @copyright Copyright (c) 2023
 */
#include <iostream>
#include "Node.h"
#include "ListaSimple.h"
#include "Collector.h"


using namespace std;

/**
 * @brief Método de ejecución del programa
 * @return
 */
int main(){

    ListaSimple lista;


    lista.insertHead(1);
    lista.insertHead(2);
    lista.insertHead(3);
    lista.deleteHead();
    lista.deleteHead();
    lista.insertHead(4);
    lista.insertHead(5);
    lista.insertHead(6);
    lista.printList();


}




