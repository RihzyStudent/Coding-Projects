#include <iostream>
#include <string>
using namespace std;

int main(){

    int purchasedJams;

    cout<<"Welcome to the jams, jellies and preserves club!"<<endl;
    cout<<"Which package do you have? (A,B or C)"<<endl;
    char packageName;
    cin >> packageName;

        if ((packageName == 'A')||(packageName == 'a'))
        {
            cout<<"Your package includes:"<<endl;
            cout<<"2 jams per month, with each additional jam costing $5"<<endl;
            cout<<"This packages costs $8/month"<<endl;

            cout<<"How many jams did you purchase this month?"<<endl;
            cin >> purchasedJams;
                if (purchasedJams <= 2)
                {
                    cout <<"You only owe the monthly fee of $8!"<<endl;
                }
                else{
                    purchasedJams -=2;
                    purchasedJams *=5;
                    cout<<"You owe the monthly fee ot $8 + a fee of $"<<purchasedJams<<endl;
                    cout<<"This is a total of $"<<purchasedJams+8<<endl;
                }
                
        }
        else if ((packageName == 'B')||(packageName == 'b'))
        {
            cout<<"Your package includes:"<<endl;
            cout<<"4 jams per month, with each additional jam costing $4"<<endl;
            cout<<"This packages costs $12/month"<<endl;
            cout<<"How many jams did you purchase this month?"<<endl;
            cin >> purchasedJams;
                 if (purchasedJams <= 4)
                {
                    cout <<"You only owe the monthly fee of $12!"<<endl;
                }
                else{
                    purchasedJams -=4;
                    purchasedJams *=4;
                    cout<<"You owe the monthly fee ot $12 + a fee of $"<<purchasedJams<<endl;
                    cout<<"This is a total of $"<<purchasedJams+12<<endl;
                }
        }
        else if ((packageName == 'C')||(packageName == 'c'))
        {
            cout<<"Your package includes:"<<endl;
            cout<<"6 jams per month, with each additional jam costing $3"<<endl;
            cout<<"This packages costs $15/month"<<endl;

            cout<<"How many jams did you purchase this month?"<<endl;
            cin >> purchasedJams;
                if (purchasedJams <= 6)
                {
                    cout <<"You only owe the monthly fee of $15!"<<endl;
                }
                else{
                    purchasedJams -=6;
                    purchasedJams *=3;
                    cout<<"You owe the monthly fee ot $15 + a fee of $"<<purchasedJams<<endl;
                    cout<<"This is a total of $"<<purchasedJams+15<<endl;
                }
        }
        else
        {
            cout<<"Please enter a valid character"<<endl;
        }

}