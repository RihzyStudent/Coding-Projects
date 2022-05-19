#include <iostream>
#include <stdexcept>
#include "ArrayList.h"
int main() {

    ArrayList myList;

    for (int i = 0; i < 15; ++i) {
        myList.add(i*10);
    }

    myList.printList();
    cout<<endl<<endl;
    cout<<"size is: "<<myList.size()<<endl;

    myList.add(555,15);
    myList.printList();
    cout<<"Size is now: "<<myList.size()<<endl;

    myList.set(987,3);
    try {
        myList.add(900);
    }
    catch (exception& err) {
        cout<<err.what();
    }
    
    myList.printList();

    return 0;
}
