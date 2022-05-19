#include <iostream>
#include <array>
using namespace std;

int main(){
    const int ARRAY_NUM=10;
    array <int,ARRAY_NUM> intArray;

    for (int i = 0; i < ARRAY_NUM; i++)
    {
        intArray [i] = i*2;

    }
    for(int numbers : intArray)
    {

        cout<<numbers<<endl;

    }


}