#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    vector <string> names;

    names.push_back("Friends");
    names.push_back("Family");
    names.push_back("Members");
    names.push_back("Pets");
    names.push_back("Celebrities");

    names.insert(names.begin() + 2,"John Baugh");
    names.pop_back();

    for (auto name : names)
    {
        cout<<name<<endl;

    }
    




}
