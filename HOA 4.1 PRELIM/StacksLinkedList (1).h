#ifndef STACKS_LINKED_LIST_H
#define STACKS_LINKED_LIST_H

#include <iostream>

struct Node {
    char value;
    Node* next;
};

class LinkedListStack {
private:
    Node* topNode;

public:
    LinkedListStack() {
        topNode = nullptr;
    }

    ~LinkedListStack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(char val) {
        Node* newNode = new Node();
        newNode->value = val;
        newNode->next = topNode;
        topNode = newNode;
    }

    char pop() {
        if (isEmpty()) {
            return '\0';
        }
        Node* temp = topNode;
        char poppedValue = temp->value;
        topNode = topNode->next;
        delete temp;
        return poppedValue;
    }

    char peek() const {
        if (isEmpty()) {
            return '\0';
        }
        return topNode->value;
    }

    bool isEmpty() const {
        return topNode == nullptr;
    }
};

#endif