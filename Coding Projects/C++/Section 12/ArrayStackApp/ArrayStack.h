#ifndef ARRAYSTACKAPP_ARRAYSTACK_H
#define ARRAYSTACKAPP_ARRAYSTACK_H
#include "../LinkedStackApp/Stack.h"
#include <iostream>

class ArrayStack : public Stack
{
public:
    ArrayStack(int s =16):MAX_SIZE(s)
    {
        top = -1;
        mArray = new int[MAX_SIZE];
    }
    void push(int newEntry)
    {
        if(top<MAX_SIZE-1)
        {
            top++;
            mArray[top]= newEntry;
        } else
        {
            cout<<"Stack is full, cannot push."<<'\n';
        }
    }
     int pop() {
        int data = 0;

         if (!isEmpty())
         {
             data = mArray[top];
             top--;
         } else
         {
             cout<<"Cannot pop on an empty stack.";
         }
         return data;
    }
     int peek() const {
        int data = 0;

         if (!isEmpty())
         {
             data=mArray[top];

         } else
         {
             cout<<"Stack is empty. Please input a value to peek.";
         }

         return data;
    }
     bool isEmpty() const {
         return top ==-1;
    }
     void makeEmpty() {
        top =-1;

    }

private:
    int* mArray;
    const int MAX_SIZE;
    int top;
};

#endif //ARRAYSTACKAPP_ARRAYSTACK_H
