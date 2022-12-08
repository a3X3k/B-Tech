package Abhi10;


public class Main{
	
	  private static int numInstances = 0;
	  int a;

	   private static int getCount() {
	      return numInstances;
	   }

	   private static void addInstance() {
	      numInstances++;
	   }
  
	   Main() {
		   Main.addInstance();
	   }
     public void  doublea()
     {
        int doub=2*a;
        System.out.println("double a="+doub);
        System.out.println("Starting with " + getCount() + " instances");
        
     }
	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
		System.out.println("Starting with " + getCount() + " instances");

	      for (int i = 0; i < 600; ++i) {
	         Main obj=new Main(); // Or new StaticMain() is enough as we dont need object
	      }
	      System.out.println("Created " + getCount() + " instances");
	      System.out.println("Starting with " + Main.getCount() + " instances");
	      //doublea() //Error Cannot make static reference to non static method doublea
	      Main obj2=new Main();
	      obj2.doublea();
	      

	}

}