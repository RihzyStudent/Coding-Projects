#include <iostream>
#include <cmath>
#include <vector>
#include <conio.h>
using namespace std;
float sum=0;
int nextNum;
int count_digit(int a);
int add();
int roundDown(int a);

int main(){
int suum = add();
int ans =roundDown(suum);
    if (count_digit(suum)>1)
    {
        vector <int> numero;
        numero.push_back(ans);
        ans*=pow(10,(count_digit(sum)-1));  
        nextNum = suum-ans;
        nextNum =roundDown(nextNum);
        numero.push_back(nextNum);
        while (count_digit(nextNum)>1)
        {
        nextNum*=(pow(10,(count_digit(sum)-1)));  
        nextNum = sum-nextNum;
        nextNum =roundDown(nextNum);
        numero.push_back(nextNum);
        cout<<nextNum<<endl;
        }  
    }
cout<<ans;
    

getch();

}
int add(){
    int a;
    vector <int> numbers;
    cout<<"Enter your first number"<<endl;
    cin>>a;
    numbers.push_back(a);
       if (a>0)
       {
           while (a>0){
            cout<<"Enter your next number"<<endl;
            cin>>a;
            numbers.push_back(a);
           }  
    numbers.pop_back();
    int size=numbers.size();
    for (int i = 0; i<size; i++){
        sum+=numbers[i];
       }
}
    return sum;
}
int count_digit(int a){
	int num = 0;
	 while (a != 0)
    {
        a /= 10;
        num++;
    }
	return num;
}
int roundDown (int a){
    int digit = count_digit(a);
	digit -=1;
	digit = pow(10,digit);
	int sum2=a/digit;
	sum2=floor(sum2);
    return sum2;
    }
