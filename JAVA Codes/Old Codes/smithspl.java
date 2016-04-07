import java.io.*;
public class smithspl
{
   public static void smith()throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader in=new BufferedReader(read);
	int n,i,j,k,x,s,c;
	System.out.println("Enter a number");
	 n=Integer.parseInt(in.readLine());
	 s=0;x=0;
	 for(i=2;i<=n;i++)
	 {
	     if(n%i==0)
	     {c=0;
	         for(j=2;j<i;j++)
	         {
	             if(i%j==0)
	             c++;
	         }
	         if(c==0)
	         {
	             for(k=i;k>0;k=k/10)
	             {
	                 s=s+(k%10);
	             }
	         }
	     }
	 }
	 for(i=n;i>0;i=i/10)
	 x=x+(i%10);
	 if(x==s)
	 System.out.println("It is a smith number");
	 else
	  System.out.println("It is not a smith number");
	}
public static void special()throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader in=new BufferedReader(read);
	
	System.out.println("Enter a number");
	 int n=Integer.parseInt(in.readLine());
	 int i,j,f,d,s;
	 s=0;
	 for (i=n;i>0;i=i/10)
	 {
	     d=i%10;f=1;
	     for(j=1;j<=d;j++)
	     f=f*j;
         s=s+f;
 }
 if(s==n)
 System.out.println("It is a special no.");
 else
  System.out.println("It is not a special no.");
}
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(read);

do
{
System.out.println("***** MENU *****");
System.out.println("1==SMITH NUMBER");
System.out.println("2==SPECIAL NUMBER");
System.out.println("3==EXIT");
System.out.println("Enter Your Choice");
int k =Integer.parseInt(br.readLine());
switch(k)
{
case 1: smith();
       break;
case 2:special();
      break;
case 3:System.exit(0);
}
}while(true);
}
}


