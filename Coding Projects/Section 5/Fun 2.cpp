#include <iostream>
using namespace std;

void printNumber(int a);
int square(int number);


int main(){

    int number = 10;
    printNumber(square(500));


}

void printNumber(int a){

    cout<<"The number inputted is: "<<a<<endl;
    
}

int square(int number){
    number*=number;
    return number;

}