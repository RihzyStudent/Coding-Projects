#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
// Higher or lower

int main(){
    srand(time(nullptr));
    string difficulty;
    cout<<"Easy, Hard or Nightmare?"<<endl;
    getline(cin,difficulty);
    if((difficulty=="Easy")||(difficulty=="easy")){
    
        const int val1= rand() %10+1;
        int sumOfGuesses = 0;
        int guess=1;
        while((guess>0)&&(guess<11)){
        cout<<"Guess my number from 1-10!"<<endl;
        cin>>guess;
        if(guess==val1){
            cout<<"Congrats you did it!"<<endl;
            sumOfGuesses ++;
            cout<<"You found the number in: "<<sumOfGuesses<<" guesses. Good job!"<<endl;
            break;
        }
        else if(guess>val1){
            cout<<"Lower!"<<endl;
            sumOfGuesses ++;
            continue;
        }
        else if(guess<val1){
            cout<<"Higher!"<<endl;
            sumOfGuesses ++;
            continue;

        }
        }
    }
    else if((difficulty=="Hard")||(difficulty=="hard")){
    
        const int val1= rand() %100+1;
        int guess=1;
        int sumOfGuesses = 0;
        while((guess>0)&&(guess<101)){
        cout<<"Guess my number from 1-100!"<<endl;
        cin>>guess;
        if(guess==val1){
            cout<<"Congrats you did it!"<<endl;
            sumOfGuesses ++;
            cout<<"You found the number in: "<<sumOfGuesses<<" guesses. Good job!"<<endl;
            break;
        }
        else if(guess>val1){
            cout<<"Lower!"<<endl;
            sumOfGuesses++;
            continue;
        }
        else if(guess<val1){
            cout<<"Higher!"<<endl;
            sumOfGuesses++;
            continue;

        }
        }
    }
    else if((difficulty=="Nightmare")||(difficulty=="nightmare")){
    
        const int val1= rand() %1000+1;
        int guess=1;
        int sumOfGuesses = 0;
        while((guess>0)&&(guess<1001)){
        cout<<"Guess my number from 1-1000!"<<endl;
        cin>>guess;
        if(guess==val1){
            cout<<"Congrats you did it!"<<endl;
            sumOfGuesses ++;
            cout<<"You found the number in: "<<sumOfGuesses<<" guesses. Good job!"<<endl;
            break;
        }
        else if(guess>val1){
            cout<<"Lower!"<<endl;
            sumOfGuesses++;
            continue;
        }
        else if(guess<val1){
            cout<<"Higher!"<<endl;
            sumOfGuesses++;
            continue;

        }
        }

    }
    else{
        cout<<"Please restart and enter a valid input"<<endl;
    }
    
    cout<<endl;
    cout<<"Press enter to exit"<<endl;
    getch();
}
    




