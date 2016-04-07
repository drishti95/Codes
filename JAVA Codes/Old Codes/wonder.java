import  java.io.*;
public class wonder
{
    public static void main(String args[])throws IOException
    {
    InputStreamReader read=new InputStreamReader(System.in);
    BufferedReader br=new BufferedReader(read);
    
    System.out.println("Enter the number");
    int n=Integer.parseInt(br.readLine());
    
    int arr[][]=new int[n][n];boolean b=true,f=true;
    
    int i,j,k,c,p,s=0,sc=0;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    System.out.println("Enter the no.s");
    arr[i][j]=Integer.parseInt(br.readLine());
    }
    }
    
     c=(int)(n*((n*n)+1))/2;
     for(i=0;i<n;i++)
     {
     s=0;sc=0;
     b=true;
     for(j=0;j<n;j++)
     {
     s=s+arr[i][j];
     sc=sc+arr[j][i];
     }
     
     if((s!=c)||(sc!=c))
     {
     b=false;
     break;
     
     }
     }
     
     if (b==true)
     System.out.println("It is a Wonder Square");
     else
     System.out.println("It is not a Wonder Square");
     
     
     System.out.println("NUMBER" + "      "+"ROW INDEX" +"      "+"COLUMN INDEX");
     
     for(i=0;i<n;i++)
     {
     
     for(j=0;j<n;j++)
     {
     f=true;
    p=arr[i][j];
    for(k=2;k<p;k++)
    {
    if(p%k==0)
    {
    f=false;
    break;
     }
     }
     if(f==true &&p!=1)
     System.out.println(p+"\t    "+i+"\t   \t   "+j);
     }
     }
     }
     }
     
     