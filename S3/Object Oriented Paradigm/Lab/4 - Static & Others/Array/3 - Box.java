package Abhi2;
import java.util.Scanner;
public class Box {
	
	int rollno;
	String name;
	int mark1,mark2,mark3;
	
	Box(int R, String S,int M1,int M2,int M3)
	{
		rollno=R;
		name=S;
		mark1=M1;
		mark2=M2;
		mark3=M3;
	}
	void setData(int R,String S)
	{
		rollno=R;
		name=S;
	}
	void ShowData()
	{
		System.out.print("Roll No = "+rollno + "  " + "\nStudent Name = "+name);
        System.out.println();
	}
	void marks()
	{
		int tot = mark1+mark2+mark3;
		String grade="";
		if(tot>=145)
		{
			grade="O";
		}
		else if(tot>=130 && tot<145)
		{
			grade="A+";
		}
		else if(tot>=100 && tot<130)
		{
			grade="A";
		}
		else
		{
			grade="B";
		}
		System.out.println("The Student's Total Marks Out Of 150 is : "+tot+"\nThe Grade is "+grade+"\n");
	}

}
