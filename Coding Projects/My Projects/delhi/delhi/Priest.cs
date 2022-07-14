using System;
namespace rpg
{
	public class Priest : Player
	{
		public Priest(string name, race Race) : base(name, Race, 100,200)
		{}
		override public string attack()
        {
			return "I will assault you with Holy Wrath!";

		}
	}
}

