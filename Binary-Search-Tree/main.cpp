#include "tree.h"

int main()
{
    Tree myTree;
    Node* temp;

    myTree.AddNode(10);
    myTree.AddNode(5);
    myTree.AddNode(8);
    myTree.AddNode(2);
    myTree.AddNode(3);
    myTree.AddNode(15);
    myTree.AddNode(25);
    myTree.AddNode(20);

    //Should print 2 3 5 8 10 15 20 25
    myTree.PrintInOrder();

    //Should print 25 20 15 10 8 5 3 2
    myTree.PrintRevOrder();

    //Should print 10 5 2 3 8 15 25 20
    myTree.PrintPreOrder();

    //Should print 3 2 8 5 20 25 15 10
    myTree.PrintPostOrder();

    //Should return a Node*. Tell the user this number exists.
    temp = myTree.SearchTree(15);

    //Should return a nullptr. Tell the user this number does not exist.
    temp = myTree.SearchTree(100);

    //Should return a Node* containing the number 2, print this to the user
    temp = myTree.FindMin();

    //Should return a Node* containing the number 25, print this to the user
    temp = myTree.FindMax();
}
