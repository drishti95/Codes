import  java.io.*;
public class twinprime
{
    public static void main(String args[])throws IOException
    {
    InputStreamReader read=new InputStreamReader(System.in);
    BufferedReader br=new BufferedReader(read);
    
    System.out.println("Enter the number");
    int n=Integer.parseInt(br.readLine());
    int i,j,f1=0,f2=0,p1=0,d,p2=0,d1,d2;
    for(i=1;i<=n+1;i++)
    {
    if((n+1)%i==0)
    f2++;
    if((n-1)%i==0)
    f1++;
    }
    if(f1==2&&f2==2)
    System.out.println("("+(n-1)+","+(n+1)+")");
    else
   {
    for(i=n;i>0;i--)
    {
    d=i-2;
    f1=0;f2=0;
    for(j=1;j<=i;j++)
    {
    if(d%j==0)
    f2++;
    if(i%j==0)
    f1++;
    
    }
    if(f1==2&&f2==2)
    {
    p1=i;
    break;
    }
    }
    
    for(i=n;i>0;i++)
    {
    d=i+2;
    f1=0;f2=0;
    for(j=1;j<=d;j++)
    {
    if(d%j==0)
    f2++;
    if(i%j==0)
    f1++;
    
    }
    if(f1==2&&f2==2)
    {
    p2=i;
    break;
    }
    }
    
    d1=n-p1;
    d2=p2-n;
    if(d1>d2)
    System.out.println("("+p2+","+(p2+2)+")");
    else
    System.out.println("("+(p1-2)+","+p1+")");
    }
    }
    }
    
    