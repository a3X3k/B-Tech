package TestBalance;

import Mypackage.*;

public class TestBalance {

	public static void main(String[] args) {
		
		Balance test1 = new Balance("J. J. Jaspers", 99.88);
		test1.show();
		
		Balance test2 = new Balance("J. J. Jaspers",-1);
		test2.show();
	}

}


