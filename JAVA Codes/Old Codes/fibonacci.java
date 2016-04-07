import java.io.*;
public class fibonacci
{
 public int fib(int n)
 {
     if(n==1)
     return 0;
     else if(n==2)
     return 1;
     else if(n>2)
     return fib(n-1)+fib(n-2);
     else
     return (-1);
 }
 public static void main(String args[])throws IOException
 {
     int n,i,term;
     InputStreamReader read=new InputStreamReader(System.in);
     BufferedReader br=new BufferedReader(read);
     System.out.println("Enter the number of terms");
     n=Integer.parseInt(br.readLine());
     fibonacci obj= new fibonacci();//creating object of the class
     System.out.println("The first " + n+" fibonacci numbers are:");
     for(i=1;i<=n;i++)
     {
       term=obj.fib(i);
       System.out.println(term);
    }
    
}
}  
    
    
    
    