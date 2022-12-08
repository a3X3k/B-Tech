package features;

import sample.*;

public class user implements details 
{
	public String ID;
	public String Name;
	public String Country;
	protected String Email;
	protected String phone;
	public String Qualification;
	public String Gender;
	public String username;
	public String password;
	
	public boolean login(String user,String pass)
	{
		if(user.equals(username) && pass.equals(password))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public void viewInvention()
	{
		new view_inventions();
	}
	public void viewAwards()
	{
		new sample.awards();
	}

}
