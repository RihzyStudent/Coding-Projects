#include <iostream>
using namespace std;

int factorial(int n);

int main(){
   int i = factorial(1);
    cout<<i<<endl;

   }

int factorial(int n){
    if (n>1)
    {
        return n*factorial(n-1);
    }
    return 1;
}