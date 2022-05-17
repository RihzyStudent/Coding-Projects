#ifndef ARRAYSTACKAPP_STACK_H
#define ARRAYSTACKAPP_STACK_H
using namespace std;

class Stack
{
public:
    virtual void push(int newEntry) = 0;
    virtual int pop() = 0;
    virtual int peek() const =0;
    virtual bool isEmpty() const =0;
    virtual void makeEmpty() =0;
};

#endif //ARRAYSTACKAPP_STACK_H
