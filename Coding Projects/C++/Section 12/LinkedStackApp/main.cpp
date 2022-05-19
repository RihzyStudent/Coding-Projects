#include <iostream>
#include "LinkedStack.h"

void printStack(LinkedStack& stack);

int main() {

    LinkedStack stack;

    stack.push(100);
    stack.push(150);
    stack.push(222);
    stack.push(71);
    stack.push(53);
    stack.push(125);

    cout<<stack.peek()<<endl;

//    while (!stack.isEmpty())
//    {
//    	cout << stack.pop() << endl;
//    }//end while

    printStack(stack);
    cout<<endl;
    printStack(stack);

    return 0;
}

void printStack(LinkedStack& stack)
{
    LinkedStack tempStack;
    int data;

    while (!stack.isEmpty())
    {
        data=stack.pop();
        cout<<data<<endl;
        tempStack.push(data);
    }
    while (!tempStack.isEmpty())
    {
        stack.push(tempStack.pop());
    }
}