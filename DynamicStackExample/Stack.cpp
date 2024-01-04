// Stack.cpp

#include "Stack.h"
#include <iostream>

Stack::Stack(int initialCapacity) {
    capacity = initialCapacity;
    size = 0;
    arr = new int[capacity];
}

Stack::~Stack() {
    delete[] arr;
}

bool Stack::isEmpty() {
    return size == 0;
}

bool Stack::isFull() {
    return size == capacity;
}

void Stack::push(int value) {
    if (isFull()) {
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }
    arr[size++] = value;
}

void Stack::pop() {
    if (!isEmpty()) {
        --size;
        if (size < capacity / 4) {
            capacity /= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; ++i) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
    }
}

void Stack::reverse() {
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
