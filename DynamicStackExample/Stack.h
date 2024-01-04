// Stack.h

#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int* arr;
    int capacity;
    int size;

public:
    Stack(int initialCapacity);
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push(int value);
    void pop();
    void reverse();
};

#endif // STACK_H
