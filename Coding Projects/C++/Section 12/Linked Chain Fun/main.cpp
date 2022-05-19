#include <iostream>
#include "Node.h"
using namespace std;

Node* createChain();
void deleteChain(Node*& head);
void printChain(Node*& head);

int main() {
    Node* theHead;
    theHead=createChain();

    printChain(theHead);
    deleteChain(theHead);
    return 0;
}

Node* createChain()
{
    Node* head = nullptr;

    for (int i = 0; i < 25; ++i) {
        head = new Node(i,head);
    }
    return head;
}
void deleteChain(Node*& head)
{
    Node* nodeDel;

    while (head != nullptr)
    {
        nodeDel = head;
        head = head->getNext();
        delete nodeDel;
    }
}
void printChain(Node*& head)
{
    Node* walker = head;
    int sum = 0;
    while (walker!= nullptr)
    {
        cout<<walker->getData()<<endl;
        walker = walker->getNext();
        sum++;
    }
    cout<<'\n'<<sum;
}