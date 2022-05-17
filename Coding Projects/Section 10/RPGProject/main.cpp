#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include <vector>

void printMainMenu();
void printRaceMenu();

Player* setUpCharacter(string playerName,int typeNum,int race);
race getRace(int raceNum);
void cleanUp(vector <Player*> playerList);

void printPlayers(vector<Player*> playerList);
int main() {
    //Temp variables for user input
    string playerName;
    int typeNum=1;
    int race;
    vector <Player*> playerList;

    //Actual program starts from here
    printMainMenu();
    cin>>typeNum;
    while (typeNum !=0)
    {
        cout<<"What should the player be called?"<<endl;
        cin.get();
        getline(cin,playerName);
        printRaceMenu();
        cin>>race;
        Player* tempPlayer = setUpCharacter(playerName,typeNum,race);
        playerList.push_back(tempPlayer);
        printMainMenu();
        cin>>typeNum;

    }
    printPlayers(playerList);
    cleanUp(playerList);

    cin.get();
    return 0;
}

void printMainMenu()
{
    cout<<"Which of the following would you like? "
          "\n\t 1- Create a Warrior "
          "\n\t 2- Create a Priest "
          "\n\t 3- Create a Mage "
          "\n\t 0- Finish creating player characters\n";
}
void printRaceMenu()
{
    cout<<"What race would you like? "
          "\n\t 1-Human"
          "\n\t 2-Elf "
          "\n\t 3-Dwarf "
          "\n\t 4-Orc "
          "\n\t 5-Troll\n";
}

Player* setUpCharacter(string playerName,int typeNum,int race)
{
    Player* tempPlayer = nullptr;

    if (typeNum == 1)
    {
        tempPlayer = new Warrior(playerName, getRace(race));
    }
    else if (typeNum == 2)
    {
        tempPlayer = new Priest(playerName, getRace(race));
    }
    else if (typeNum == 3)
    {
        tempPlayer = new Mage(playerName, getRace(race));
    }
    return tempPlayer;

}
race getRace(int raceNum)
{
    race Race = static_cast<race>(raceNum-1);
    return Race;
}
void printPlayers(vector<Player*> playerList)
{
    for (Player* player : playerList) {
        cout<<"I'm a "<<player->whatRace()<<" and my attack is: "<<player->attack()<<'\n';
    }
}
void cleanUp(vector <Player*> playerList)
{
    for (Player* player : playerList) {
        delete player;
        player = nullptr;
    }
}