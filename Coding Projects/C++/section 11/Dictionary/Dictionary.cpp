//
// Created by dbehl on 5/16/2022.
//

#include "Dictionary.h"

void Dictionary::addDefinition(string word, string definition) {

    auto words = dictionary.find(word);
    if (words!=dictionary.end())
    {
        words->second=definition;
    }
    else
    {
        dictionary[word] = definition;
    }
}

string Dictionary::getDefinition(string word) {
    auto words = dictionary.find(word);
    string result = " ";
    if(words!=dictionary.end())
    {
        result = words->second;
    } else
    {
        result = "Not Found";
    }
    return result;
}

void Dictionary::printAll() const {
    for(const auto& words : dictionary)
    {
        cout<<words.first<<": "<<words.second<<'\n';
    }
}
