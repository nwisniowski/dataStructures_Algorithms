#include "node.h"

//DO NOT TOUCH
Node::Node()
{
    key_ = 0;
    left_ = nullptr;
    right_ = nullptr;
}

//DO NOT TOUCH
Node::Node(int key){
    key_ = key;
    left_ = nullptr;
    right_ = nullptr;
}

//DO NOT TOUCH
int Node::GetKey(){
    return key_;
}

//DO NOT TOUCH
Node* Node::GetLeft(){
    return left_;
}

//DO NOT TOUCH
Node* Node::GetRight(){
    return right_;
}

//DO NOT TOUCH
void Node::SetLeft(Node* n){
    left_ = n;
}

//DO NOT TOUCH
void Node::SetRight(Node* n){
    right_ = n;
}
