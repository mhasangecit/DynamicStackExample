#include "Stack.h"
#include <iostream> 
using namespace std;

int main() {
    Stack myStack(5);

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Original Stack :";
    myStack.reverse();
    
    myStack.pop();
    cout << "Stack after one pop: ";
    myStack.reverse();

    myStack.pop();
    cout << "Stack after another pop: ";
    myStack.reverse();

    return 0;
}
