#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;
class House {

public:
    House();
    House(int stories, int windows, string colors);
    ~House();
    void setNumStories(int numStories);
    void setWindows(int numWindows);
    void setColor(string color);

    int getNumStories() const;
    int getNumWindows() const;
    string getColor() const;

    void print() const;

private:
    int numStories;
    int numWindows;
    string color;

};

#endif