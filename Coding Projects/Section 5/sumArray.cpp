#include <iostream>
#include <vector>
using namespace std;

int sumArray(int myArray[] ,int sizeOfArray);
int main(){

    int myArray[]{10,20,30,40,50,600,70,80,90,100};
    int sum= sumArray(myArray,8);
    cout<<"Sum is: "<<sum<<endl;


}
int sumArray(int myArray[],int sizeOfArray){

int sum=0;

for (int i = 0; i < sizeOfArray; i++)
{
    sum +=myArray[i];
}
return sum;

}
