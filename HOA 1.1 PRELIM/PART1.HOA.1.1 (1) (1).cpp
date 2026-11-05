#include <iostream>
 
// It can now swap doubles, floats, or chars, not just integers.
template <typename T>
void swapNumbers(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Explicitly using the std:: prefix for all standard library functions
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "\nBefore swapping:\n";
    std::cout << "First Number = " << num1 << std::endl;
    std::cout << "Second Number = " << num2 << std::endl;

    swapNumbers(num1, num2);

    std::cout << "\nAfter swapping:\n";
    std::cout << "First Number = " << num1 << std::endl;
    std::cout << "Second Number = " << num2 << std::endl;

    return 0;
}
