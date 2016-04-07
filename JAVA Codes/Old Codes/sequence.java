import java.io.*;
public class sequence
{
	
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(read);
	
	System.out.println("Enter the number of terms in the sequence");
	int n=Integer.parseInt(br.readLine());
	int arr[]=new int[n];
	int i,sum=0,sum1=0,j,l=0,h=0;
	System.out.println("Enter the numbers in the sequence");
	for(i=1;i<=n;i++)
	{
	arr[i-1]=Integer.parseInt(br.readLine());
	}
	for(i=0;i<n;i++)
	{
	sum=0;
     for(j=i;j<n;j++)
     {
     if((sum+arr[j])<0)
     
     break;    
     else
     sum=sum+arr[j];
     }
     if(sum>sum1)
     {
     sum1=sum;
     l=i+1;
     h=j;
     }
     }
     System.out.println("MAXIMAL SUBSEQUENCE");
     System.out.println("Starting index- " + l);
     System.out.println("Ending index- "+h);
     System.out.println("Sum of Subsequence- " +sum1);
     }
     }
     
     