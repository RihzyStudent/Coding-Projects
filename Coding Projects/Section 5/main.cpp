#include <iostream>
#include <array>
using namespace std;

int sumArray(array<int,10> theArray);
int main(){

   array<int,10> primaryArray{2,4,5,6,7,8,9,1,9,10};
    int sum= sumArray(primaryArray);
    cout<<sum<<endl;
}

int sumArray(array<int,10> theArray){

    int sum=0;
    for (int size:theArray)
    {
        sum+=size;
    }
    
    return sum;
}