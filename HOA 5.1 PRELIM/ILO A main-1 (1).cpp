#include <iostream>
#include <queue>


int main (){
  //create an object
  std::queue<char> myQ;

void display(std::queue<char> copyQ);

  //use the queue operation
  myQ.push('C');
  myQ.push('L');
  myQ.push('I');
  myQ.push('N');
  myQ.push('T');
  std::cout<<"My current front is: " << myQ.front()<<std::endl;
  std::cout<<"My current back is: " << myQ.back()<<std::endl;

  

  //use the dequeue opearation
  myQ.pop();
  display(myQ);
  myQ.pop();
  display(myQ);
  myQ.pop();





  return 0;


}

  void display(std::queue<char> copyQ){

    //create a copy of a queue
    std::queue<char> temp = copyQ;
 
    //loop until empty
    while(!temp.empty()){
      //Display Front
      std::cout<<" "<< temp.front() << " ";

      //dequeu the front
      temp.pop();



    }

    //add a new line
    std::cout<<std::endl;


}