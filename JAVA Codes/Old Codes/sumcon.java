import java.io.*;
public class sumcon
{
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(read);
int n ,i,sum=0,j,k;
System.out.println("Enter the number");
n=Integer.parseInt(br.readLine());
 
for(i=1;i<=n/2;i++)
{
sum=0;
for(j=i;sum<n;j++)
{
sum=sum+j;
}
if(sum==n)
{
for(k=i;k<j-1;k++)
System.out.print(k+"+");
System.out.println(j-1 +"="+n);
}
}
}
}

