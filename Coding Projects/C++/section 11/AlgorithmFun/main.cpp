#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void fillVector(vector <int>& myVector);
void printVector(const vector <int>& myVector);
void countFives(const vector <int>& myVector);


int main() {
    vector <int> myVector;
    fillVector(myVector);
    printVector(myVector);
    countFives(myVector);

    cout<<"Replacing fives with 99's"<<'\n';
    replace(myVector.begin(),myVector.end(),5,99);

    countFives(myVector);
    printVector(myVector);
    cout<<"\n\n\n";
    sort(myVector.begin(),myVector.end());
    printVector(myVector);

    return 0;
}

void fillVector(vector <int>& myVector)
{
    srand(time(nullptr));
    int temp;

    for (int i = 0; i < 20; ++i) {
        temp = rand() % 5+1;
        myVector.push_back(temp);
    }
}
void printVector(const vector <int>& myVector)
{
    for(int element : myVector)
    {
        cout<<element<<endl;
    }
}
void countFives(const vector <int>& myVector)
{
    int numFives = count(myVector.begin(),myVector.end(),5);
    cout<<"Number of fives: "<<numFives<<endl;
}