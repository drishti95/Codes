import java.io.*;
public class romantill69
{
	public static void main(String args[])throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader in=new BufferedReader(read);
    
	System.out.println("Enter a number");
	int n=Integer.parseInt(in.readLine());
	String arr[]={"I","II","III","IV","V","VI","VII","VIII","IX","X"};
	
	int x,y,i;
	x=n/10;
	y=n%10;
	String s="";
	if(y!=0)
	s=s+arr[y-1];
	else 	
	s=s+"";
	if(x!=4 && x!=5 && x!=6 )
	{
	for(i=1;i<=x;i++)
	s="X"+s;
	}
	else if(x==4)
	s="XL"+s;
	else if (x==5)
	s="L"+s;
	else if (x==6)
	s="LX"+s;
	
	
	System.out.println("The corresponding roman numerical is:"+s);
	}
	}
	
	 
   