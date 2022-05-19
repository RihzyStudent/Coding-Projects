#include <iostream>
using namespace std;

void threeTimesN(int input, int& output);
int main(){

    int input = 10;
    int output;
    threeTimesN(input,output);
    cout<<"Your number multiplied by 3 is: "<<output<<endl;
}
void threeTimesN(int input, int& output)
{
    output = input*3;

}
