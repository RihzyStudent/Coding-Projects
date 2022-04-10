#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int nextnum;
int sum;
int count_digit(int a);
int jklol(int digits, int sum);
int main(){
   cout<<jklol(4,1210);
    
        
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
int jklol(int digits, int sum){
    vector <int> numero;
    while (digits>=1)
    
    {
       int powa = pow(10,(digits-1));
        nextnum =(sum/powa) %10;
        digits -=1;
        numero.push_back(nextnum);
    }
    int size = numero.size();
    for (int i = 0; i < size; i++)
    {
        sum+=numero[i];
    }
    if (sum>9)
    {
    vector <int> numero2;
    digits=count_digit(sum);
    while (digits>=1)
    
    {
       int powa = pow(10,(digits-1));
        nextnum =(sum/powa) %10;
        digits -=1;

        numero2.push_back(nextnum);
    }
    int size = numero2.size();
    for (int i = 0; i < size; i++)
    {
        sum+=numero2[i];
    }
    }
    return sum;
}