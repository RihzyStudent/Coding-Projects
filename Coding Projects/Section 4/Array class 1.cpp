#include <iostream>
using namespace std;

int main(){
    const int ARRAY_SIZE = 10;
    int moreArrayFun [ARRAY_SIZE];
        for (int i = 0; i < ARRAY_SIZE; i++)
          {
        moreArrayFun [i]=i+1;
            for(int numbers : moreArrayFun){
                cout<<numbers<<endl;
            }
       
         }
    

}