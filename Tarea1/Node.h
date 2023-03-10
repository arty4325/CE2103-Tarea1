//
// Created by jorge on 09/03/23.
//

#ifndef CE2103_TAREA1_NODE_H
#define CE2103_TAREA1_NODE_H

class Node{
public:
    int value;
    Node* next;
    Node(int value);
    void deleteNode(Node *direction);
    void checkNode();
    void modifyNode(int value);
};

#endif //CE2103_TAREA1_NODE_H
