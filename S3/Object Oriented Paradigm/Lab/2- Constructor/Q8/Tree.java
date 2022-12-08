package Abhi;

public class Tree {

	private int height=1;
	
	void Currentheight(int n)
	{
		int i=1;
		while(i<=n)
		{
			if(i%2!=0)
			{
				height = height+2;
			}
			else
			{
				height = height*3;
			}
			i++;
		}
	}
	
	int GetHeight()
	{
		return height;
	}
	
}
