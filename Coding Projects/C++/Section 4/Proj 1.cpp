#include <iostream>
#include <array>
using namespace std;

int main(){

    int raise [5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter an integer:"<<endl;
        cin>>raise[i];
    }
    cout<<"Here are the amounts doubled!"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<(raise[i])*2<<endl;
    }
    

}