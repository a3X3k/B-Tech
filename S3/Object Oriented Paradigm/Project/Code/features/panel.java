package features;

import sample.*;

public class panel {
	
	public String panel_id;
	public String panel_name;
	public String award_category;
	int year;
	String award_id;
	
	void view_invention()
	{
		new view_inventions();
	}
	void final_nomination()
	{
		new final_nom();
	}
	void view_winners()
	{
		new results();
	}
}
