
package Abhi;

public class Box {
	
	String reverse(String s)
	{
		String rev="";
		char[] ch = s.toCharArray(); 
	    for(int i=ch.length-1;i>=0;i--)
	    {  
	        rev += ch[i];  
	    }  
	    return rev;  
	}
	
	int[] ascii(String s,int l)
	{
		int arr[],k=0;    
		arr = new int[l];
		char[] ch = s.toCharArray(); 
		for(int i=0;i<l;i++)
		{
			int ascii=ch[i];
			arr[k++]=ascii;
		}
		
		return arr;
	}
	
	String diff(String s,int l)
	{
		String s1="";
		char[] ch = s.toCharArray(); 
		for(int i=0;i<l-1;i++)
		{
			s1+=ch[i]-ch[i+1];
		}
		return s1;
	}
	
	String diff1(String s,int l)
	{
		String s1="";
		char[] ch = s.toCharArray(); 
		for(int i=0;i<l-1;i++)
		{
			s1+=ch[i+1]-ch[i];
		}
		return s1;
	}
	

}
