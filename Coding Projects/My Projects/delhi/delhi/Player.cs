using System;
namespace rpg
{

	abstract public class Player
	{
		private string name { get; set; }
		private race Race { get; set; }
		private int hitPoints { get; set; }
		private int magicPoints { get; set; }

		public Player(string name, race Race, int hitPoints, int magicPoints)
		{
			this.name = name;
			this.Race = Race;
			this.hitPoints = hitPoints;
			this.magicPoints = magicPoints;
		}
		abstract public string attack();
		public race whatRace()
        {
			return Race;
        }
	}
	public enum race
	{
		Human,
		Elf,
		Dwarf,
		Orc,
		Troll
	}
}