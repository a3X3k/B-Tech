package DriverPack;

import Pack.*; //Method 1
import Mypack.simple; //Method 2

public class Driver {

	public static void main(String[] args) {
		
		A obj1 = new A();
		simple obj2 = new simple();
		MyownPack.B obj3 = new MyownPack.B(); //Method 3
		
		obj1.msg();
		obj2.msg();
		obj3.msg();
	}

}
