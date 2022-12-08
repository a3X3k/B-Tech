package Abhi15;
public class E3 {
	public static void main(String[] args) {
		division(100,0);        // Line 2
        System.out.println("Main Program Terminating");
	}
	
	public static void division(int totalSum, int totalNumber) {
        int quotient = -1;
        System.out.println("Computing Division.");
        try{
            quotient  = totalSum/totalNumber;
            System.out.println("Result is : "+quotient);
        }
        catch(Exception e){
            System.out.println("Exception : "+ e.getMessage());
        }
        finally{
            if(quotient != -1){
                System.out.println("Finally Block Executes");
                System.out.println("Result : "+ quotient);
            }else{
                System.out.println("Finally Block Executes. Exception Occurred");
            }
        }
    }
}
