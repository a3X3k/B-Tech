
public class Main {

	public static void main(String[] args) {
		
		Complex com= new Complex();
		Complex com1= new Complex(4,2);
		com1.add(com.real,com1.real,com.img,com1.img);
		com1.sub(com.real,com1.real,com.img,com1.img);
	}

}
