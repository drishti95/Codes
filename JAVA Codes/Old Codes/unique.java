import java.io.*;
public class unique
{
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(read);
	System.out.println("Enter the lower limit");
	int m=Integer.parseInt(br.readLine());
	
	System.out.println("Enter the upper limit");
	int n=Integer.parseInt(br.readLine());
	
	System.out.println("The unique digit integers are:");
	
	int i ,f=0,j,k,d,c;boolean b ;
	for(i=m;i<=n;i++)
	{b=true;
	 mid : for(j=0;j<10;j++)
	{c=0;
	for(k=i;k>0;k=k/10)
	{
	d=k%10;
	if(d==j)
	c++;
	if(c>1)
	{
	b= false;
	break mid;
	}
	}
	}
	if(b==true)
	{
	System.out.println(i);
	f++;
	}
	
	}
	
	System.out.println("The frequency of unique digit integers is :" + f);
	
	}
	}
	
	