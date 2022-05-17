#include <iostream>
using namespace std;

int main()
{
    enum Direction{UP,DOWN,LEFT,RIGHT,STANDING};
    Direction myDirection = STANDING;


    if(myDirection == UP)
    {
        cout<<"Up!"<<'\n';
    }
    else if (myDirection == DOWN)
    {
        cout<<"Down!"<<'\n';
    }
    else if (myDirection == LEFT)
    {
        cout<<"Left!"<<'\n';
    }
    else if (myDirection == RIGHT)
    {
        cout<<"Right!"<<'\n';
    }
    else if(myDirection == STANDING)
    {
        cout<<"Standing still!"<<'\n';
    }
    return 0;
}