package Q7;

import java.util.Scanner;

public class Animal {

			int cat1;
			int cat2;
			int mouse;
			
			void catmouse(){
				
				Scanner obj = new Scanner(System.in);
				System.out.print("Enter the Position of Cat 1 : ");
				cat1=obj.nextInt();
				
				System.out.print("Enter the Position of Cat 2 : ");
				cat2=obj.nextInt();
				
				System.out.print("Enter the Position of Mouse : ");
				mouse=obj.nextInt();
				
				int pos1,pos2;
				
				if(cat1<mouse)
				{
					pos1=mouse-cat1;
				}
				else
				{
					pos1=cat1-mouse;
				}
				
				if(cat2<mouse)
				{
					pos2=mouse-cat2;
				}
				else
				{
					pos2=cat2-mouse;
				}
				
				if(pos1<pos2)
				{
					System.out.println("Cat A will Reach First!!");
				}
				else if(pos2<pos1)
				{
					System.out.println("Cat B will Reach First!!");
				}
				else
				{
					System.out.println("Two cats will Fight and Mouse will Escape!");
				}
				
			}
}
