import java.io.*;
public class sort
{
	public static void main(String args[])throws IOException
	{
	    InputStreamReader read=new InputStreamReader(System.in);
	    BufferedReader br=new BufferedReader(read);
	    System.out.println("Enter the size of the array");
	   int n=Integer.parseInt(br.readLine());
	    int arr[]=new int[n];
	    int i,j,d,d2,temp,c;
	    for(i=0;i<n;i++)
	    {
	        System.out.println("Enter a number in the array");
	        arr[i]=Integer.parseInt(br.readLine());
	       }
	       
	       for(i=0;i<n;i++)
	       {
	           
	           for(j=0;j<n-1;j++)
	           {
	               c=1;
	               d=d2=0;
	               
	               
	             while (d2==d)
	            {
	               d=arr[j];
	              d2=arr[j+1];
	              
	              while(d>=(int)Math.pow(10,c))
	              {
	                  d=d/10;
	               }
	               d=d%10;
	               while(d2>=(int)Math.pow(10,c))
	              {
	                  d2=d2/10;
	               }
	               d2=d2%10;
	               if(c>1)
	               {
	                if(arr[j]<10)
	                d=0;
	                if(arr[j+1]<10)
	                d2=0;
	               }
	               
	               c++;
	               
	           }
	               if(d2<d)
	               {
	                   temp=arr[j+1];
	                   arr[j+1]=arr[j];
	                   arr[j]=temp;
	            }
	           }
	           
	       }
	       System.out.println("The numbers after sorting are:");
	       for(i=0;i<n;i++)
	       System.out.println(arr[i]);
	   }
}
    
	                   
	                   
	            
	  