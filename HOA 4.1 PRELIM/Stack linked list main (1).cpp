#include <iostream>
#include <string>
#include "StacksLinkedList.h"

bool isPairMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool checkBalanced(const std::string& expr) {
    LinkedListStack stack;

    for (size_t i = 0; i < expr.length(); ++i) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.isEmpty()) {
                std::cout << "Error: Unmatched closing symbol '" << ch << "' at index " << i << "\n";
                return false;
            }

            char topChar = stack.pop();
            if (!isPairMatching(topChar, ch)) {
                std::cout << "Error: Mismatched symbols '" << topChar << "' and '" << ch << "' at index " << i << "\n";
                return false;
            }
        }
    }

    if (!stack.isEmpty()) {
        std::cout << "Error: Expression has unclosed opening symbols.\n";
        return false;
    }

    return true;
}

int main() {
    std::string inputExpr;

    std::cout << "  BALANCED SYMBOL CHECKER (LINKED LIST)    \n";
    std::cout << "Enter expression: ";
    std::getline(std::cin, inputExpr);

    if (checkBalanced(inputExpr)) {
        std::cout << "\nResult: BALANCED\n";
    } else {
        std::cout << "\nResult: NOT BALANCED\n";
    }

    return 0;
}