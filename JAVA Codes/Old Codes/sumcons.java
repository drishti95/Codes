
import java.io.*;
public class sumcons
{
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(read);

System.out.println("INPUT : ");
System.out.print("N= ");
int n=Integer.parseInt(br.readLine());
System.out.println("OUTPUT :");

int i,j,sum=0;
String st="";
for(i=n-1;i>0;i--)
{
for(j=i;sum<n && j>=0;j--)
{
st=j+" "+st;
sum=sum+j;
}
if(sum==n)
System.out.println(st);
st="";
sum=0;
}
}
}


