
import java.io.*;
public class binaryadd
{
	
public static void main(String args[])throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader in=new BufferedReader(read);
	int a,b,r,q=0,v,w;
	String s="",s2="",res="";
	System.out.println("Enter first number");
	 a=Integer.parseInt(in.readLine());
	 System.out.println("Enter second number");
	 b=Integer.parseInt(in.readLine());
	 v=a;
	 w=b;
	 while(q!=1)
	{
	r=a%2;
	q=a/2;
	a=q;
	s=r+s;
	}
	s=1+s;q=0;
	while(q!=1)
	{
	r=b%2;
	q=b/2;
	b=q;
	s2=r+s2;
	}
	s2=1+s2;
	System.out.println("Binary of "+v+" is "+s);
	System.out.println("Binary of "+w+" is "+s2);

	int l1=s.length();
	int l2=s2.length();
	
	int i,j,x,y,c=0,sum=0;
	for(i=l1-1,j=l2-1;i>=0||j>=0;i--,j--)
	{
	    if(i>=0)
	    x=(int)s.charAt(i)-48;
	    else
	    x=0;
	    if(j>=0)
	    y=(int)s2.charAt(j)-48;
	    else 
	    y=0;
	    
	    sum=x+y+c;
	    if(sum==0||sum==1)
	    {
	        res=sum+res;
	        c=0;
	       }
	       else if(sum==2)
	       {
	           res=0+res;
	           c=1;
	       }
	       else if (sum==3)
	       {
	           res=1+res;
	           c=1;
	       }
	   }
	   
	   System.out.println("Sum of "+s+" and "+s2+ "=:" +c+ res);
	   
}
}
	    
	
	
	