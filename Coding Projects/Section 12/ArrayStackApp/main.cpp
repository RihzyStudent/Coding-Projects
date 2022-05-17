#include <iostream>
#include "ArrayStack.h"

void printAll( ArrayStack array);

int main() {

    ArrayStack stack;
    for (int i = 0; i < 17; ++i) {
        stack.push(i);
    }
    printAll(stack);
    cout<<endl<<endl;
    while (!stack.isEmpty())
    {
        cout<<stack.pop()<<endl;
    }


    return 0;
}

void printAll( ArrayStack array)
{
    ArrayStack tempArray;
    int data;
    while (!array.isEmpty())
    {
        tempArray.push(array.pop());
    }
    for (int i = 0; i < 16; ++i) {
        data=tempArray.pop();
        cout<<data<<endl;

    }
}