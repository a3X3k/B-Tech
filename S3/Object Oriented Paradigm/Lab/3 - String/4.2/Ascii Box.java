package Abhi1;

import java.util.Scanner;

public class Driver {
	
	int[] find(String s)
	{
		int i=0,j=0,k=0,c=0,p=0,p1=0,f=0,ascii;
		int arr[];
		arr = new int[15];
		int arr1[];
		arr1 = new int[15];
		char[] ch=s.toCharArray(); 
		for(i=0;i<ch.length;i++)
		{
			c=1;
			f=0;
			for(j=0;j<p1;j++)
			{
				if(ch[i]==arr1[j])
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				for(j=i+1;j<ch.length;j++)
				{
					if(ch[i]==ch[j])
					{
						c++;
					}
				}
				for(k=1;k<=c;k++)
				{
					ascii=ch[i]-96;
					arr[p++]=ascii*k;
				}
				arr1[p1++]=ch[i];
			}
		}
		return arr;
	}
	
	int[] input(int x)
	{
		int arr[];
		arr = new int[x];
		Scanner scan = new Scanner(System.in);
		for(int i=0;i<x;i++)
		{
			System.out.print("Enter the Query : "+(i+1)+" - ");
			arr[i]=scan.nextInt();
		}
		
		return arr;
	}

}
