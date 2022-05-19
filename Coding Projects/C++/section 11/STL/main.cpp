#include <iostream>
#include <deque>
using namespace std;
void printDeque(deque<int> deck);

int main() {

    deque<int> mydeck;
    mydeck.push_back(1);
    mydeck.push_back(5);
    mydeck.push_back(10);

    cout<<"First print: \n";
    printDeque(mydeck);

    mydeck.push_front(20);
    mydeck.push_front(30);
    cout<<"Next print: \n";
    printDeque(mydeck);
    return 0;
}

void printDeque(deque<int> deck)
{
    for (int num : deck)
    {
        cout<<num<<endl;
    }
    cout<<endl;
}