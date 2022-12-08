package Abhi9;

import java.util.Scanner;

public class Track {
	
	static int count=0;
	static int heavy;
	static int heavy1;
	static int four;
	static int four1;
	static int two;
	static int two1;
	
	static int total=0;
	static int total1=0;
	
	static int icount=0;
	static int iheavy;
	static int iheavy1;
	static int ifour;
	static int ifour1;
	static int itwo;
	static int itwo1;
	
	static int op1,op;
	static Scanner scan = new Scanner(System.in);
	static void input() {
		
		System.out.println("\nOPTIONS : \n\n\t\t1 FOR HEAVY VEHICLE OR 4 WHEELER");
		System.out.println("\n\t\t2 FOR MEDIUM VEHICLE OR 4 WHEELER");
		System.out.println("\n\t\t3 FOR TWO WHEELER");
		System.out.print("\n\t\tENTER THE CHOICE : ");
		op= scan.nextInt();
		System.out.println("\n\t\tPAID - 1 OR NOT - 0");
		System.out.print("\n\t\tENTER THE CHOICE : ");
		op1= scan.nextInt();
		count++;
		
		if(op1==1)
		{
			if(op==1)
			{
				heavy++;
				heavy1=heavy1+50;
				total=total+50;
			}
			if(op==2)
			{
				four++;
				four1=four1+50;
				total=total+50;
			}
			if(op==3)
			{
				two++;
				two1=two1+10;
				total=total+10;
			}
		}
		else if(op1==0)
		{
			icount++;
			if(op==1)
			{
				iheavy++;
				iheavy1=iheavy1+50;
				total1=total1+50;
			}
			if(op==2)
			{
				ifour++;
				ifour1=ifour1+50;
				total1=total1+50;
			}
			if(op==3)
			{
				itwo++;
				itwo1=itwo1+10;
				total1=total1+10;
			}
		}
		
	}
	
	static void tot() 
	{
		System.out.println("\nTOTAL AMOUNT COLLECTED TODAY = "+total);
	}
	
	static void tot1() 
	{
		System.out.println("\nTOTAL AMOUNT COLLECTED TODAY = "+total1);
	}
	
	static void icount() 
	{
		System.out.println("\nVEHICLE PASSED WITHOUT PAYING THE TOLL = "+icount);
	}
	
	static void count() 
	{
		System.out.println("\nVEHICLE PASSED THE TOLL = "+count);
	}
	
	static void print() 
	{
		System.out.println("\n\t\tAMOUNT COLLECTED : ");
		System.out.println("\nHEAVY VEHICLE : "+heavy1);
		System.out.println("\nMEDIUM VEHICLE OR 4 WHEELER : "+four1);
		System.out.println("\nTWO WHEELER : "+two1);
	}


}
