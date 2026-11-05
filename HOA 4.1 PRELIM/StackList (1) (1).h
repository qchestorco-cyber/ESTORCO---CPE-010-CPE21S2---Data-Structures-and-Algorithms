#ifndef STACK_LIST_H
#define STACK_LIST_H

#include <iostream>

#define MAX_SIZE 100

class ArrayStack {
private:
    char data[MAX_SIZE];
    int topIndex;

public:
    ArrayStack() {
        topIndex = -1;
    }

    bool push(char value) {
        if (topIndex >= MAX_SIZE - 1) {
            std::cout << "Stack overflow!\n";
            return false;
        }
        data[++topIndex] = value;
        return true;
    }

    char pop() {
        if (isEmpty()) {
            return '\0';
        }
        return data[topIndex--];
    }

    char peek() const {
        if (isEmpty()) {
            return '\0';
        }
        return data[topIndex];
    }

    bool isEmpty() const {
        return topIndex == -1;
    }
};

#endif