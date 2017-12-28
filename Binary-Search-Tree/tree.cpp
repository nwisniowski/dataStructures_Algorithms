#include "tree.h"

//DO NOT TOUCH
Tree::Tree()
{
    root_ = nullptr;
}

//DO NOT TOUCH
void Tree::AddNode(int key){
    if(!root_){
        root_ = new Node(key);
    }else{
        AddNode(root_, key);
    }
}

void Tree::AddNode(Node* curr, int key){
    //Implement this recursive function
}

//DO NOT TOUCH
void Tree::PrintInOrder(){
    PrintInOrder(root_);
}

void Tree::PrintInOrder(Node* curr){
    //Implement this recursive function
}

//DO NOT TOUCH
void Tree::PrintPostOrder(){
    PrintPostOrder(root_);
}

void Tree::PrintPostOrder(Node* curr){
    //Implement this recursive function
}

//DO NOT TOUCH
void Tree::PrintPreOrder(){
    PrintPreOrder(root_);
}

void Tree::PrintPreOrder(Node* curr){
    //Implement this recursive function
}

//DO NOT TOUCH
void Tree::PrintRevOrder(){
    PrintRevOrder(root_);
}

void Tree::PrintRevOrder(Node* curr){
    //Implement this recursive function
}

//DO NOT TOUCH
Node* Tree::SearchTree(int key){
    return SearchTree(root_, key);
}

Node* Tree::SearchTree(Node* curr, int key){
    //Implement this recursive function
}

//DO NOT TOUCH
Node* Tree::FindMin(){
    return FindMin(root_);
}

Node* Tree::FindMin(Node* curr){
    //Implement this recursive function
}

//DO NOT TOUCH
Node* Tree::FindMax(){
    return FindMax(root_);
}

Node* Tree::FindMax(Node* curr){
    //Implement this recursive function
}
