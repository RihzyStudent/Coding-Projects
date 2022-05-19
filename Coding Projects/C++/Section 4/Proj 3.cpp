#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector <int> weight;
    vector <string> name;
    const int ARRAY_SIZE = 5;
    int weight2;
    string name2;
    for (int i=0; i<ARRAY_SIZE; i++)
    {
        cout<<"Please enter a persons full name"<<endl;
        getline(cin,name2);
        cout<<"What is "<<name2<<"'s weight?"<<endl;
        cin>>weight2;
         weight.push_back(weight2);
        name.push_back(name2);
        cin.get();
    }
    cout<<endl;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout<<name[i]<<"'s weight is "<<weight[i]<<endl;

    }
    
  
    

    

   
    
    


    
    

}