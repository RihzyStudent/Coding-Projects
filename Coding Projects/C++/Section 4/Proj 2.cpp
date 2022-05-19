#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector <int> data;
    int input;    
        cout<<"Please enter a positive value to add to the vector, or a negative integer to quit"<<endl;
        cin>>input;
        while(input>=0){
            data.push_back(input);
            cout<<"Please enter a positive value to add to the vector, or a negative integer to quit"<<endl;
            cin>>input;
        }
    cout<<"Here are your integers!"<<endl;
    for (int i = 0; i<data.size(); i++)
    {
        cout<<(data[i])*2<<endl;
    }


}