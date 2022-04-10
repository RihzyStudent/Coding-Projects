#include <iostream>
#include <array>
using namespace std;

int sumArray(array <int,10> theArray);
void sumArray(array <int,10> theArray, int& theSum);
int main(){

    array <int,10> array{10,20,30,40,50,60,70,80,90,100};
    cout<<"The sum of elements in sumArray is: "<<sumArray(array)<<'\n';
    int passByRef;
    sumArray(array,passByRef);
    cout<<"The sum of elemnts in a Pass By Reference is: "<<passByRef;

}

int sumArray(array <int,10> theArray){
    int sum = 0;
    for (int item:theArray)
    { 
        sum += item; 
    }
    return sum;    

}
void sumArray(array <int,10> theArray, int& theSum)
{
    theSum=sumArray(theArray);
}
