
using System;
namespace rpg
{
	public class Mage : Player
	{
		public Mage(string name, race Race) : base(name,Race,150,150)
		{
		}
		override public string attack()
        {
			return "I will crush you with the power of my arcane missiles!";
        }
	}
}

