package Abhi4;
import java.util.Scanner;

public class Driver {

	public static void main(String[] args) {
		
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter the Number of Sticks : ");
		int len=scan.nextInt();
		
		int[] arr=new int[len];
		System.out.print("Enter the Length of sticks : ");
		for(int i=0;i<len;i++)
		{
			arr[i]=scan.nextInt();
		}
		int l=len;
		while(l>=1)
		{
			int min=100000;
			for(int i=0;i<l;i++)
			{
				if(arr[i]<min)
				{
					min=arr[i];
				}
			}
			System.out.println(l);
			int[] arr1=new int[l];
			int k=0;
			for(int i=0;i<l;i++)
			{
				if(arr[i]!=min)
				{
					arr1[k++]=arr[i]-min;
				}
			}
			for(int i=0;i<k;i++)
			{
				arr[i]=arr1[i];
			}
			l=k;
		}
	}
}
