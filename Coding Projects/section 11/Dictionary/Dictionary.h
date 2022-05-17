#ifndef DICTIONARY_DICTIONARY_H
#define DICTIONARY_DICTIONARY_H
#include <map>
#include <string>
#include <iostream>
using namespace std;

class Dictionary {
public:
    void addDefinition(string word,string definition);
    string getDefinition(string word);
    void printAll() const;

private:
    map <string,string> dictionary ;
};


#endif //DICTIONARY_DICTIONARY_H
