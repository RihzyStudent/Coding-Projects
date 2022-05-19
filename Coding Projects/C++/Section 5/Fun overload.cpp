#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int n);

int main(){

    int resultNum = getResult(3,2);
    string nameResult = getResult("John", "Baugh");
    int numCube = getResult(resultNum);

    cout<<"Result num is "<<resultNum<<endl;
    cout<<"name result is "<<nameResult<<endl;
    cout<<"Result num cubed is "<<numCube<<endl;


}

int getResult(int num1, int num2)
{
    return num1*num2;
}
string getResult(string str1, string str2)
{
    return str1 + " " + str2;
}
int getResult(int n)
{
    return n*n*n;
}