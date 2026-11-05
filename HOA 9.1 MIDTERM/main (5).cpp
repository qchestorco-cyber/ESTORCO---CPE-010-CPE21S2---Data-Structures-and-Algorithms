#include <iostream>
#include "binaryTree.h"


main(){

//creating a rootnode:
BinaryTree<char>* root = new BinaryTree<char>('A');

//creating a child of root node A:
root->insertLeftchild('B');
root->insertRightchild('C');

//insert a child to node B:
root->getLeftchild() ->insertLeftchild('D');
root->getLeftchild() ->insertRightchild('F');

//insert a child to node C:
root->getRIghtchild()->insertLeftchild('E');

//print the rootnode:
std::cout<< "Root: "<< root->getrootVal() << std::endl;

//children of root node
std::cout << "Root: " << root->getLeftChild()->getRootVal() << std::endl;
std::cout << "Root: " << root->getRightChild()->getRootVal() << std::endl;
//children of the sub tree
std::cout << "Root: " << root->getLeftChild()->getLeftChild()->getRootVal() << std::endl;
std::cout << "Root: " << root->getLeftChild()->getRightChild()->getRootVal() << std::endl;

root->getLeftchild()->getRightchild()->getrootVal('E');
std::cout<<"Node B right child: " << root->getLeftchild()->getRightchild()



  return 0;
}