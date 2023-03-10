#include <iostream>
#include "Node.h"
#include "ListaSimple.h"
#include "Collector.h"

using namespace std;

int main(){
    ListaSimple lista;


    lista.insertHead(1);
    lista.insertHead(2);
    lista.insertHead(3);
    lista.printList();

    Node* n = new Node(5);
    n->checkNode();
    n->modifyNode(7);
    n->checkNode();

    Collector collector;
    collector.hola();
}




