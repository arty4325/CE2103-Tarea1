#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node (int value){
        this->value = value;
        this->next = nullptr;
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

int main(){
    ListaSimple lista;
    lista.insertHead(1);
    lista.insertHead(2);
    lista.insertHead(3);
    lista.printList();
}



