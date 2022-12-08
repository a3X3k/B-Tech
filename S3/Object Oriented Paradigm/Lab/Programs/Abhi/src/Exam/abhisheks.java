package Exam;

class mynameException extends Exception
{
	mynameException(String s)
	{
		super(s);
	}
}

public class abhisheks implements nameroll {
	
	String name;
	String rollno;
	
	abhisheks(String n,String r)
	{
		name = n;
		rollno = r;
	}
	
	public int nameLength() throws mynameException
	{
		int len = name.length();
		if(len>3)
		{
			throw new mynameException("Unfortunately your Length is Lengthier");
		}
		return len;	
	}

	public void rollnoMix() throws ArithmeticException{
		
			char ch[] = new char[3];
			rollno.getChars(13, 15, ch, 0);
			
			int[] num = new int[rollno.length()];

		    for (int i = 0; i < rollno.length(); i++){
		        num[i] = rollno.charAt(i) - '0';
		    }
		    try {
		    int sum=0;
		    for (int i=0;i<3;i++)
		    {
		    	sum+=num[i];
		    }
		    	
		    throw new ArithmeticException("Your Rollno is not acceptable.");
		}
		finally
		{
			System.out.print("Finally");
		}
	}
}
