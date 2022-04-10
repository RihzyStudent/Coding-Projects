#include <iostream>
#include <cmath>
#include <vector>
#include <conio.h>
using namespace std;
float sum=0;
int summer;
int nextNum;
int count_digit(int a);
int add();
int roundDown(int a);
int num(int digits, int sumAdd);

int main(){
int sumAdd = add();
int sumRound = roundDown(sumAdd);
int digits = count_digit(sumAdd);
int ans = num(digits,sumAdd);
int ansNum=count_digit(ans);
cout<<num(ansNum,ans)<<endl;
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
int num(int digits,int sumAdd){
    if(digits>1){
     vector <int> numero;
    while (digits>=1)
    {
       int powa = pow(10,(digits-1));
        nextNum =(sumAdd/powa) %10;
        digits -=1;
        numero.push_back(nextNum);
    }
    int size = numero.size();
    for (int i = 0; i < size; i++)
    {
        summer+=numero[i];
       
    }
}
    return summer;
}