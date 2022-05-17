#ifndef LINKEDLISTAPP_LINKEDLIST_H
#define LINKEDLISTAPP_LINKEDLIST_H
#include <iostream>
#include "List.h"
#include <stdexcept>
using namespace std;
//-----------------Node Class---------------------------

class Node
{
public:
    Node(int data,Node* next)
    {
        this->data=data;
        this->next=next;
    }
    int getData() const
    {
        return data;
    }
    void setData(int data)
    {
        this->data=data;
    }
    Node* getNext() const
    {
        return next;
    }
    void setNext(Node* next)
    {
        this->next=next;
    }
private:
    int data;
    Node* next;
};

//-----------------LinkedList Class---------------------

class LinkedList : public List
{
public:
    LinkedList()
    {
        mNumElements=0;
        mHead= nullptr;
    }
    ~LinkedList()
    {
        makeEmpty();
    }
    void add(int newEntry)
    {
        Node* newNode = new Node(newEntry,mHead); //Next = mHead
        mHead = newNode;

        mNumElements++;
    }

    void add(int newEntry, int position) {
        Node* newNode = new Node(newEntry,mHead);

        if (position >= mNumElements+1 || position<0)
        {
            cout<<"Error: cannot add at specified position"<<endl;
            return;
        }
        if (position==0)
        {
            newNode->setNext(mHead);
            mHead=newNode;
        } else
        {
            Node* nodeBefore =mHead;
            Node* nodeAfter;

            for (int i = 0; i < position; ++i) {
                nodeBefore=nodeBefore->getNext();

            }
            nodeAfter=nodeBefore->getNext();
            newNode->setNext(nodeAfter);
            nodeBefore->setNext(newNode);
        }
        mNumElements++;
    }
    void set(int newEntry, int position) {
        Node* walker = mHead;
        int index =0;

        if (position >= mNumElements || position < 0)
        {
            exception(logic_error);
            return;
        }

        for (int i = 0; i < position; ++i) {
            walker= walker->getNext();
        }
        walker->setData(newEntry);
    }

    bool contains(int entry) const {
        if (find(entry) != -1)
        {
            return true;
        }
        return false;
    }
    int find(int entry) const {

        int foundIndex = -1;

        int indexCounter = 0;
        Node* walker = mHead;

        while (walker != nullptr)
        {
            if (walker->getData() == entry)
            {
                foundIndex=indexCounter;
                break;
            }
            indexCounter++;
            walker=walker->getNext();
        }

        return foundIndex;
    }
    int remove(int position) {
        if (position >= mNumElements || position < 0)
        {
            exception(logic_error);
            return 0;
        }

        int dataToReturn = 0;

        if (position ==0)
        {
            Node* temp = mHead;
            dataToReturn=temp->getData();
            mHead=mHead->getNext();
            delete temp;
        } else
        {
            Node* nodeBefore = mHead;
            Node* nodeToRemove;
            Node* nodeAfter;

            for (int i = 0; i < position-1; ++i) {
                nodeBefore=nodeBefore->getNext();
            }
            nodeToRemove=nodeBefore->getNext();
            dataToReturn = nodeToRemove->getData();

            nodeAfter=nodeToRemove->getNext();

            nodeBefore->setNext(nodeAfter);
            delete nodeToRemove;
            delete nodeAfter;
            delete nodeBefore;
        }
        mNumElements--;
}
    void makeEmpty() {
        Node* temp;
        while (mHead!= nullptr)
        {
            temp=mHead;
            mHead= mHead->getNext();
            delete temp;
        }
        mNumElements=0;
}
    int size() const {
        return mNumElements;
    }
    bool isEmpty() const {
        return mNumElements==0;
}
    void printList() const {
        Node* walker = mHead;
        while (walker != nullptr)
        {
            cout<<walker->getData()<<endl;
            walker=walker->getNext();
        }
    }
    
private:
    Node* mHead;
    int mNumElements;
};


#endif //LINKEDLISTAPP_LINKEDLIST_H
