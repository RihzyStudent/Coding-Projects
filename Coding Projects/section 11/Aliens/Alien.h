//
// Created by dbehl on 5/17/2022.
//

#ifndef ALIENS_ALIEN_H
#define ALIENS_ALIEN_H
using namespace std;

class Alien {
public:
    bool operator==(const Alien& other) const;
    bool operator !=(const Alien& other) const;
    bool operator>(const Alien& other) const;
    bool operator>=(const Alien& other) const;
    bool operator<(const Alien& other) const;
    bool operator<=(const Alien& other) const;
    void operator=(const Alien& other);
    Alien operator+(const Alien& other);


    Alien(int weight, int height, char gender);
    int getWeight() const;
    int getHeight() const;
    char getGender() const;
    int getPrestige() const;

private:
    int weight;
    int height;
    char gender;
};


#endif //ALIENS_ALIEN_H
