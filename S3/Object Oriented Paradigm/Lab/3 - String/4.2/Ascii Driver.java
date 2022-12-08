
package Abhi1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the String : ");
		String s=scan.nextLine();
		
		Driver obj=new Driver();
	
		int arr[];
		arr = new int[15];
		arr=obj.find(s);
		
		System.out.print("Enter the Number of Queries : ");
		int a=scan.nextInt();
		
		int arr1[],f=0;
		arr1 = new int[a];
		arr1=obj.input(a);
		
		for(int i=0;i<a;i++)
		{
			f=0;
			for(int j=0;j<arr.length;j++)
			{
				if(arr1[i]==arr[j])
				{
					f=1;
					System.out.println("Yes");
					break;
				}
			}
			if(f==0)
			{
				System.out.println("No");
			}
		}
	}

}
