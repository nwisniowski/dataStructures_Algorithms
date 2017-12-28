#ifndef TREE_H
#define TREE_H

#include "node.h"
#include <iostream>

class Tree
{
public:
    Tree();
    void AddNode(int key);
    void AddNode(Node* curr, int key);

    Node* GetRoot();

    void PrintInOrder();
    void PrintInOrder(Node* curr);
    void PrintPostOrder();
    void PrintPostOrder(Node* curr);
    void PrintPreOrder();
    void PrintPreOrder(Node* curr);
    void PrintRevOrder();
    void PrintRevOrder(Node* curr);
    Node* SearchTree(int key);
    Node* SearchTree(Node* curr, int key);
    Node* FindMin();
    Node* FindMin(Node* curr);
    Node* FindMax();
    Node* FindMax(Node* curr);
private:
    Node *root_;
};

#endif // TREE_H
