package Exam;

public class Driver {

	public static void main(String[] args) {
		
			abhisheks obj = new abhisheks("Abhisheks","AM.EN.U4CSE19147");
			
			try {
				obj.nameLength();
			} catch (mynameException e) {
				
				e.printStackTrace();
			}
			obj.rollnoMix();
	
        }
	}
