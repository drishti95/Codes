import java.io.*;
public class frequency
{
	
	public static void main(String args[])throws IOException
	{
	    InputStreamReader read=new InputStreamReader(System.in);
	    BufferedReader br=new BufferedReader (read);
	    
	    System.out.println("Enter the no.of elements");
	    int n=Integer.parseInt(br.readLine());
	    int ar[]=new int[n];
	    int i,x,r,m,j;
	    for(i=0;i<n;i++)
	    {
	        System.out.println("Enter no.s in an array");
	        ar[i]=Integer.parseInt(br.readLine());
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        x=ar[i];r=0;m=0;
	        for(j=0;j<n;j++)
	        {
	            if(ar[j]==x)
	            {
	                if(j<i)
	                r++;
	                else
	                m++;
	            }
	        }
	    if(r==0)
	    System.out.println(x+"*"+m);
	}
	}
	}
	
	     