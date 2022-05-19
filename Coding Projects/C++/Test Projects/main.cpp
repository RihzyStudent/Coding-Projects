#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 3; i++)
    {
        goto 9;
        cout<<"Sad"<<endl;
    }
    cout<<"Hi";
}