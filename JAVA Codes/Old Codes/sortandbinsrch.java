import java.io.*;
public class sortandbinsrch
{
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(read);

int n ,i,j,small,pos;
char k;
System.out.println("Enter the no. of elements in the list");
n=Integer.parseInt(br.readLine());
int arr[]=new int[n];
char type[]=new char[n];
for(i=0;i<n;i++)
{
System.out.println("Enter the type of integer ");
type[i]=(char)(br.read());
System.out.println("Enter the corresponding integer");
arr[i]=Integer.parseInt(br.readLine());
}
for(i=0;i<n-1;i++)
{
small=arr[i];
pos=i;
for(j=i+1;j<n;j++)
{
if(arr[j]<small)
{
small=arr[j];
pos=j;
}}
arr[pos]=arr[i];
k=type[pos];
type[pos]=type[i];
type[i]=k;
arr[i]=small;
}
System.out.println("INTEGER"+"      " +"TYPE");
for(i=0;i<n;i++)
{
System.out.print(arr[i]);
if(type[i]=='P')
System.out.println("Positive");
else
System.out.println("Negative");
}
}
}

