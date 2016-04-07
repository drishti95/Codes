import java.io.*;
public class recurringpattern
{
public static void main(String args[])throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader in=new BufferedReader(read);
	
    int i,j,k,c;
	System.out.println("Enter integer argument");
	int n=Integer.parseInt(in.readLine());
	System.out.println("The corresponding pattern is:");
	System.out.println();
	
	c=n-1;
	for(i=1;i<=n;i++)
	{
	for(k=1;k<=c;k++)
	System.out.print(" ");
	for(j=1;j<=i;j++)
	System.out.print(" c");
	System.out.println();
	c--;
	}
	c=c+2;
	for(i=n-1;i>=1;i--)
	{
	for(k=1;k<=c;k++)
	System.out.print(" ");
	for(j=1;j<=i;j++)
	System.out.print(" c");
	System.out.println();
	c++;
	}
	}
	}
	
	