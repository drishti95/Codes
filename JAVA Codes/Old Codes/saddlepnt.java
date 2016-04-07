import java.io.*;
public class saddlepnt
{
	public static void main(String args[])throws IOException
	{
	    InputStreamReader read=new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(read);
	    System.out.println("Enter the no. of rows and columns");
	    int a=Integer.parseInt(br.readLine());
	    int b=Integer.parseInt(br.readLine());
	    int arr[][]=new int[a][b];
	     int i,j,sm,c,la;
	     for(i=0;i<a;i++)
	     {
	         for(j=0;j<b;j++)
	         {
	             System.out.println("Enter numbers in a matrix");
	             arr[i][j]=Integer.parseInt(br.readLine());
	         }
	     }
	     
	     sm=arr[0][0];
	     la=arr[0][0];
	    boolean f=false;
	  
	                 for (i=0;i<a;i++)
              {
              sm=arr[i][0];
              c=0;
              la=arr[i][0];
                 for (j=0;j<b;j++)
                 {
                     if (arr[i][j]<sm)
                     {
                     sm=arr[i][j];la=arr[i][j];
                     c=j;
                     }
                     }
                     for (j=0;j<a;j++)
                     {
                        if (arr[j][c]>la)
                        {
                        la=arr[j][c];
                        }
                        }
                        if (la==sm)
                        {
                        f=true;
                        break;
                        }
                        }
                        if (f==true)
                        System.out.println("The saddle point is="+sm);
                        else
                        System.out.println("no saddle point");
                        }}
                     
                     
