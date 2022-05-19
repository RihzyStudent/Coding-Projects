#include <iostream>
using namespace std;

int multiply (int num1, int num2, int num3);
int main(){
    int num1;
    int num2;
    int num3;
    cout<<"What is your first number?"<<endl;
    cin>>num1;
    cout<<"What is your second number?"<<endl;
    cin>>num2;
    cout<<"What is your third number?"<<endl;
    cin>>num3;

    int product = multiply(num1,num2,num3);
    cout<<"Your product is: "<<product<<endl;


}

int multiply (int num1, int num2, int num3){

    int product;
    product = num1*num2*num3;
    return product;
}