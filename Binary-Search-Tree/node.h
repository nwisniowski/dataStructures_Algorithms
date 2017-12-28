#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node();
    Node(int key);

    int GetKey();
    Node* GetLeft();
    Node* GetRight();

    void SetLeft(Node* n);
    void SetRight(Node* n);
private:
    int key_;
    Node* left_;
    Node* right_;
};

#endif // NODE_H
