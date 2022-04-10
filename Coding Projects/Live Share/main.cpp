#include <iostream>
using namespace std;
int main(){
    cout<<"Hey do you need help with the groceries? Enter 1,2 or 3 to exit."<<endl;
    int help;
    cin>>help;
        if (help==1)
        {
           cout<<"We'll help with the bags, how many bags are there?"<<endl;
           int bags;
            cin>>bags;
            cout<<"ok we'll get the "<<bags<<" in."<<endl;
        }
        if (help==2)
        {
            cout<<"Ok you don't want any help, fucking weirdo."<<endl;
        }
        if (help==3)
        {
            cout<<"Alrighty then, tell us when you want help"<<endl;
            
            }
return 0;
}