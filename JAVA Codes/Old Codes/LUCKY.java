
import java.io.*;

public class LUCKY
{
	public static void main(String args[])throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	 BufferedReader br=new BufferedReader(read);
	
	System.out.println("Enter the number");
	int n=Integer.parseInt(br.readLine());
	int i,j,c=0;
	int arr[]=new int[n];
	for(i=0;i<n;i++)
	{
	arr[i]=i+1;
	}
	for(i=2;i<n/2;i++)
	{
	c=0;
	for(j=0;j<n;j++)
	{
	if(arr[j]!=0)
	c++;
	if(c==i)
	{
	c=0;
	arr[j]=0;
	}
	}}
	System.out.println("The lucky numbers less than " +n+" are:");
	
	for(i=0;i<n;i++)
	{
	if(arr[i]!=0)
	System.out.println(arr[i]);
	}
	}
	}
	
	