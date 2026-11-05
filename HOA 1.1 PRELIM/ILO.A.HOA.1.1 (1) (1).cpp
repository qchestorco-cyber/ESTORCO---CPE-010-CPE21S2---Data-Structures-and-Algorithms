#include <iostream>
#include <iomanip> 

// Function prototypes
int sumOfTwoNum(int fNum, int sNum);
void compare(int Num1, int Num2);
int LogicalOperation(bool A, bool B); 

int main() {
    // Display the sum of two numbers
    std::cout << "The sum of two numbers is: " << sumOfTwoNum(27, 23) << std::endl;

    //  Compare two numbers
    compare(27, 23);

    // Added a test call to complete the LogicalOperation function
    std::cout << "\n--- Logical Operations Test ---" << std::endl;
    int result = LogicalOperation(true, false);
    
    return 0;
}

// Function that takes two numbers and returns their sum
int sumOfTwoNum(int fNum, int sNum) {
   
    return fNum + sNum;
}

// Function to determine if Num1 is greater, less than, or equal to Num2
void compare(int Num1, int Num2) {
    if (Num1 > Num2) {
        std::cout << "Value A is greater than Value B" << std::endl;
    } 

    else if (Num1 < Num2) {
        std::cout << "Value A is less than Value B" << std::endl;
    } 
    else {
        std::cout << "Value A is equal to Value B" << std::endl;
    }
}


int LogicalOperation(bool A, bool B) {
    // boolalpha forces the console to print "true/false" instead of "1/0"
    std::cout << std::boolalpha; 
    
    std::cout << "A AND B (A && B) is: " << (A && B) << std::endl;
    std::cout << "A OR B (A || B)  is: " << (A || B) << std::endl;
    std::cout << "NOT A (!A)       is: " << (!A) << std::endl;

    // Returns 1 (true) if the overall combination is valid/true, otherwise 0
    return (A || B); 
}
