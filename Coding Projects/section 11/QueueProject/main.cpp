#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string name;
    queue<string> nameQueue;

    nameQueue.push("John");
    nameQueue.push("Sally");
    nameQueue.push("Bob");
    nameQueue.push("Sam");
    nameQueue.push("Ali");
    nameQueue.push("Karen");

    while (!nameQueue.empty())
    {
        cout<<nameQueue.front()<<'\n';
        nameQueue.pop();
    }

    return 0;
}
