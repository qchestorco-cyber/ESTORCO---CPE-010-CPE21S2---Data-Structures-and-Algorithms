#include <iostream>
#include "queueLL.h"


int main (){
  qNode<char>* front = nullptr;
  qNode<char>* back = nullptr;

  enqueue('C', &front, &back);
  std::cout<<front ->data << " "<<"Back: "<<back->data<<std::endl;
  enqueue('L', &front, &back);
  std::cout<<front ->data << " "<<"Back: "<<back->data<<std::endl;
  enqueue('I', &front, &back);
  std::cout<<front ->data << " "<<"Back: "<<back->data<<std::endl;
  enqueue('N', &front, &back);
  std::cout<<front ->data << " "<<"Back: "<<back->data<<std::endl;
  enqueue('T', &front, &back);
  std::cout<<front ->data << " "<<"Back: "<<back->data<<std::endl;

  std::cout << "\nDisplaying full queue:\n";
  display(&front);
  std::cout << "\n";

  std::cout<<"testing the dequeue operator: \n";
  dequeue(&front, &back);
  std::cout<<"Front: " << front ->data << " "<<"Back: "<<back->data<<std::endl;
  display(&front);

  dequeue(&front, &back);
  std::cout<<"Front: " << front ->data << " "<<"Back: "<<back->data<<std::endl;
  display(&front);

  dequeue(&front, &back);
  std::cout<<"Front: " << front ->data << " "<<"Back: "<<back->data<<std::endl;
  display(&front);

  dequeue(&front, &back);
  std::cout<<"Front: " << front ->data << " "<<"Back: "<<back->data<<std::endl;
  display(&front);

  dequeue(&front, &back);
  display(&front);

  dequeue(&front, &back);
  dequeue(&front, &back);





  return 0;
}