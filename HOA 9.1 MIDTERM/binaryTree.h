#ifndef BINARYTREE_H
#define BINARYTREE_H



template <typename T>
class BinaryTree{
  private:
  //create a tree
  T key;
  //pointers
  BinaryTree<T>* leftchild;
  BinaryTree<T>* rightchild;
  T getrootVal();
  public:
  //CONSTRUCTOR
  BinaryTree<T>::(T rootObj);

  //Adding/inserting a child node:
  void insertLeftchild(T newNode);
  void insertRightchild(T newNode);

  BinaryTree<T>* getLeftchild();
  BinaryTree<T>* getRightchild();



};

template <typename T>
BinaryTree<T>::BinaryTree(T rootObj){
  key = rootObj;
  leftchild = nullptr;
  rightchild = nullptr;
}

template<typename T>
void BinaryTree<T>::insertLeftchild(T newNode){
  if (leftchild == nullptr){
    leftchild == new BinaryTree<T>(newNode)

  }
  }else{
    BinaryTree<T>* newChild = new BinaryTree<T>*(newNode);
    newChild->rightchild=rightchild;
    rightchild=newChild;

  }

template<typename T>
void BinaryTree<T>::insertRightchild(T newNode){
  rightchild = newBinaryTree<T>(newNode); 
}

template <typename T>
BinaryTree<T>* BinaryTree<T>::getLeftchild(){
  return leftchild;
}

template<typename T>
T BinaryTree<T>::getrootVal(){
  return key;
}

template<typename T>
bool BinaryTree<T>::isLeaf(){

  return leftchild == nullptr && rightChild == nullptr;
}



#endif