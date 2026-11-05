#ifndef QUEUELL_H
#define QUEUELL_H

//CREATE A CLASS NODE
template <typename T>
class qNode{
  public:
   T data;
   qNode* next;
};


//NEW NODE CREATOR
template <typename T>
qNode<T>* new_node(T newData){
  //allocate a space for new data
  qNode<T>* newNode = new qNode<T>;
  //store new data to the newnode
  newNode -> data  = newData;

  //point the newnode to the next
  newNode -> next = nullptr;

  return newNode;
}

//ENQUEUE
template<typename T>
void enqueue(T newData, qNode<T>** frontptr, qNode<T>** backptr) {

  //CREATE A NEW NODE
  qNode<T>* newNode = new_node(newData);

  //check if the queue is empty
  if((*frontptr)== nullptr && (*backptr) == nullptr){
    (*frontptr) = newNode;
    (*backptr) = newNode;
    return;
  }
  //if not then insert at the bACK
  (*backptr) ->next = newNode;
  (*backptr) = newNode;



}
//DEQUEUE
template <typename T>
void dequeue(qNode<T>** frontptr, qNode<T>** backptr){
  //check if the queue is empty
  if((*frontptr) == nullptr && (*backptr) == nullptr){
    std::cout<<"the queue is empty"<<std::endl;
    return;
  }


  //create a temporary variable to tore the node to the deleted
  qNode<T>* deleteTemp = nullptr;

  //Assign the current front to the deleteTemp
  deleteTemp = (*frontptr);

  //check if the queue has only 1 item
  if((*frontptr)-> next == nullptr && (*backptr) -> next == nullptr){
    //means only 1 item is insidie the queue
    (*frontptr) = nullptr;
    (*backptr) = nullptr;
    delete  deleteTemp;
    return;
  }

  (*frontptr) = (*frontptr)->next;
  deleteTemp->next = nullptr;

  //delete na node
  delete deleteTemp;
}


//DISPLAY ALL
template <typename T>
void display(qNode<T>** frontptr) {
  //check if the queue is empty
  if ((*frontptr) == nullptr) {
    std::cout << "the queue is empty" << std::endl;
    return;
  }

  //create a temporary pointer to traverse the queue from front to back
  qNode<T>* temp = (*frontptr);

  std::cout << "Queue: ";
  while (temp != nullptr) {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
  std::cout << std::endl;
}

#endif