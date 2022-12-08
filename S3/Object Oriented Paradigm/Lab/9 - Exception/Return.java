package Abhi15;

public class E6 {

	public static void main(String[] args) {
		
		int x = 10, y = 2;
        int counter = 0;
        boolean flag = true;
        while (flag) {
        start:
            try {
                if ( y > 1 )
                    break start;
                if ( y < 0 )
                    return;
                x = x / y;
                System.out.println ( "x : " + x + " y : "+y );
            }
            catch ( Exception e ) {
                System.out.println ( e.getMessage() );
            }
            finally {
                ++counter;
                System.out.println ( "Counter : " + counter );
            }
            --y;
        }

	}

}
