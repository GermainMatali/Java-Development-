
public class Character {
	// declear instance field 
	private String oneChar;
	
	public Character(String newChar)
	{
		oneChar = newChar;
		//end constructor character 
	}
	
	public String thisChar2()
	{
		return oneChar;
	}	//end method thisChar2
	
	public String toString()
	{
		return "Character: " + oneChar; 
	}	//end method toString
} //end class character
