package Abhi15;

public class E4 
{
	public static void main(String[] args) 
	{
        try{
        	
            int result  = division(100,10);
            result  = division(100,0);
            System.out.println("result : "+result);
        }
        
        catch(ArithmeticException e)
        {
            System.out.println("Exception : "+ e.getMessage());
        }
    }
	
    public static int division(int totalSum, int totalNumber) throws ArithmeticException {
        int quotient = -1;
        System.out.println("Computing Division.");
        try{
            if(totalNumber == 0){
            	throw new ArithmeticException("Division attempt by 0");
            }
            quotient  = totalSum/totalNumber;
        }
        finally{
            if(quotient != -1){
                System.out.println("Finally Block Executes");
                System.out.println("Result : "+ quotient);
            }else{
                System.out.println("Finally Block Executes. Exception Occurred");
            }
        }
        return quotient;
    }
}
