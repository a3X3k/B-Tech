package Q4;

public class OddEven {
	
	int odd;
	int even;
	
	void oddNumber(int n)
	{
		if(n%2==0)
		{
			++even;
		}
		else
		{
			++odd;
		}
	}
	
	void tostring() {
		
		System.out.println("\nThere are " + even + " Even numbers and " + odd + " Odd numbers.");
	}

}
