package Abhi15;

class BadTemperature extends Exception{
    BadTemperature( String reason ){
        super ( reason );
    }
}
class TooHot extends BadTemperature{
    TooHot(){
        super ("Default messaeg : Hot");
    }
    TooHot(String message){
        super (message);
    }
}
class TooCold extends BadTemperature{ 
    TooCold(){
        super ("Default messaeg : Cold");
    }
    TooCold(String message){
        super (message);
    }
}
class TempertureObject{ 
    int temperature;
    TempertureObject( int temp ) {
        temperature = temp;
    }
    void test() throws TooHot, TooCold {
        if ( temperature < 70 ) throw new TooCold("Very Cold");
        if ( temperature > 80 ) throw new TooHot("Very Hot");
    }
}

public class E5 {
	
	private static void temperatureReport( TempertureObject batch ){
        try{   batch.test();
            System.out.println( "Perfect Temperature" );
        }
        catch ( BadTemperature bt ){
            System.out.println( bt.getMessage( ) );
        }
    }
    public static void main( String[] args ){
        temperatureReport( new TempertureObject( 100 ) );
        temperatureReport( new TempertureObject( 50 ) );
        temperatureReport( new TempertureObject( 75 ) );
    }
}

