
import java.io.*;
public class SPIRAL
{
	public static void main(String args[])throws IOException
	{
	  InputStreamReader read=new InputStreamReader(System.in);
       BufferedReader br=new BufferedReader(read);
        System.out.println("Enter the no. of lines");
         int n=Integer.parseInt(br.readLine());
	    int ar[][]=new int[n][n];
	   int i,j,a=n*n,m=1,lr=0,lc=0,ur=n-1,uc=n-1;
	   while(m<=a)
	 
	    {  for(j=lr;j<=uc&&m<=a;j++)
	      ar[lr][j]=m++;
          lr++;
          for(j=lr;j<=ur&&m<=a;j++)
          ar[j][uc]=m++;
          uc--;
          for(j=uc;j>=lc&&m<=a;j--)
          ar[ur][j]=m++;
          ur--;
          for(j=ur;j>=lr&&m<=a;j--)
          ar[j][lc]=m++;
          lc++;
    }     
	          for(i=0;i<n;i++)
	          {
	              for(j=0;j<n;j++)
	              System.out.print(ar[i][j]+"    ");
	              System.out.println();
	          }
	            
	        
	}}