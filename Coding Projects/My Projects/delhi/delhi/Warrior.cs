using System;
namespace rpg
{
	public class Warrior : Player
	{
		public Warrior(string name, race Race) : base(name, Race, 200, 0) {}
		
		override public string attack()
        {
			return "I will destroy you with my sword, foul demon!";
		}
	}
}

