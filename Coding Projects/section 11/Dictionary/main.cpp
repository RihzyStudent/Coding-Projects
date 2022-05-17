#include <iostream>
#include "Dictionary.h"
using namespace std;

void printMainMenu();
void getDef(string name, Dictionary& dictionary);
void printAll(Dictionary& dictionary);

int main() {
    int select;
    string name;
    string definition;
    Dictionary dictionary;

    printMainMenu();
    cin>>select;

    while (select>0)
    {
        cin.get();
        if (select == 1)
        {
            cout<<"Enter the word"<<'\n';
            getline(cin,name);
            cout<<"Enter the definition for "<<name<<'\n';
            getline(cin,definition);
            dictionary.addDefinition(name,definition);
        }

        else if (select == 2)
        {
            cout<<"For which word do you want the definition? \n";
            getline(cin,name);
            cout<<dictionary.getDefinition(name)<<'\n';
        }

        else if (select == 3)
        {
            dictionary.printAll();
        }
        printMainMenu();
        cin>>select;
    }

    return 0;
}
void printMainMenu()
{
    cout<<"\nType Your Selection"
    <<"\n\t 1- Add a new word and definition"
    <<"\n\t 2-Get the definition of a word"
    <<"\n\t 3- Print all the definitions"
    <<"\n\t 0- Exit the program";
}