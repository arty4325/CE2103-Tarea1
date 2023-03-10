#include <iostream>
#include "Collector.h"
using namespace std;

class Node;
class ListaSimple;
class Collector;


class Node{
private:
    //ListaSimple lista;
public:
    int value;
    Node* next;
    //ListaSimple lista = new Collector();
    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
    void deleteNode(Node* direction){

    }
    void checkNode(){
        cout<<this->value<<endl;
    }
    void modifyNode(int value){
        this->value = value;
    }
};
class ListaSimple{
private:
    Node* head;
public:
    ListaSimple(){
        this->head = nullptr;
    }
    Node* getHead(){
        return this->head;
    }
    void setHead(Node* newHead){
        this->head = newHead;
    }
    void insertHead(int value){
        Node* newNode = new Node(value);
        newNode -> next = this -> head;
        this -> head = newNode;
    }
    void printList(){
        Node* current = this->head;
        while(current != nullptr){
            cout << current->value << endl;
            current = current -> next;
        }
    }
};
/*class Collector: public ListaSimple{
private:
public:
    Collector(){

}
    void addDirections(int &Direction){
        int DirectionPtr = Direction;
        Node *newNode = new Node(DirectionPtr);
    }
    int checkAvailableDirections(){
    Node* Head = collector->getHead();
    while(Head != null){
        int* valor = Head->valor;
        if(valor != null){
            return *valor;
        }
        Head = Head->next;
    }
}
};*/


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
}




