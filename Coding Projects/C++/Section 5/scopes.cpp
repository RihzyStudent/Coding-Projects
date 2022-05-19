#include <iostream> 
using namespace std;

void modifyGlobal();
int counter = 0;
int main(){

    cout<<"The global variables original number is: "<<counter<<endl;
        for (int i = 0; i < 100; i++)
        {
         modifyGlobal();
        
        }
         cout<<"Its new number is: "<<counter<<endl;

}

void modifyGlobal(){

    counter++;
}