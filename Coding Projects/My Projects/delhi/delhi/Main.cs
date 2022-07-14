using rpg;

static void PrintMainMenu()
{
    Console.WriteLine("What would you like to create?\n\t1) Mage\n\t2) Priest\n\t3) Warrior");
}
static void PrintRaceMenu()
{
    Console.Write("What race would you like ?\n\t 1-Human\n\t 2-Elf\n\t 3-Dwarf\n\t 4-Orc\n\t 5-Troll\n");
}
static Player setUpCharacter(string PlayerName, int typeNum, int race)
{
    Player tempPlayer=null;
    if (typeNum==1)
    {
        tempPlayer = new Mage(PlayerName, getRace(race));
    }
    else if (typeNum == 2)
    {
        tempPlayer = new Priest(PlayerName, getRace(race));
    }
    else if (typeNum == 3)
    {
        tempPlayer = new Warrior(PlayerName, getRace(race));
    }
    return tempPlayer;
}
static race getRace(int raceNum)
{
    race Race = (race)(raceNum-1);
    return Race;
}
static void printPlayers(List<Player> playerList)
{
    foreach(Player players in playerList)
    {
        Console.Write("I'm a " + players.whatRace() + " and my attack is: " + players.attack()+'\n');
    }
}

string playerName="";
int typeNum = 1;
int race=1;
var playerList = new List<Player>();

Main:
PrintMainMenu();
try
{
typeNum = Convert.ToInt32(Console.ReadLine());
}
catch (SystemException)
{
Console.WriteLine("Please enter a valid input.");
    goto Main;
}
Beginning:
while (typeNum != 0)
{ 
    if (typeNum < 4 && typeNum >= 0)
    {
        while (playerName == "")
        {
            Console.WriteLine("What should the player be called?");
            playerName = Console.ReadLine();
        }
    RB:
        PrintRaceMenu();
        try
        {
            race = Convert.ToInt32(Console.ReadLine());

        }
        catch (SystemException)
        {
            Console.WriteLine("Please enter a valid input.");
            goto RB;
        }
   
        if (race > 6 || race < 1)
        {
            Console.Write("Please enter a valid input.\n");
            race = 1;
            goto RB;
        }
        else
        {
            Player player = setUpCharacter(playerName, typeNum, race);
            playerList.Add(player);
            playerName = "";
            race = 1;
            typeNum = 1;
        }
        }
    PrintMainMenu();
    try
    {
        typeNum = Convert.ToInt32(Console.ReadLine());
    }
    catch (SystemException)
    {
        Console.WriteLine("Please enter a valid input.");
        goto Beginning;

    }
}
    printPlayers(playerList);
    Console.ReadLine();
