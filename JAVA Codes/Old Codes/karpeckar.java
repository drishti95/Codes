import java.io.*;
public class karpeckar
{
 public static void main(String args[])throws IOException
 {
       InputStreamReader read = new InputStreamReader(System.in);
       BufferedReader in = new BufferedReader(read);
       int m,n,q,i,j,k,c,d;c=0;
       double p,s,r,sum;p=0;r=0;s=0;sum=0;
       System.out.println("Input : ");
       System.out.print("p = ");
        m=Integer.parseInt(in.readLine());
         
       System.out.print("q = ");
        n=Integer.parseInt(in.readLine());
         System.out.println("Output : ");
          System.out.println("The Karprekar nos. are :");
         
       for(i=m;i<=n;i++)
       {
        k=i*i;c=0;
           for(j=i;j>=1;j=j/10)
           {
               d=j%10;
               c++;
            }
           
            s=k/(int)(Math.pow(10,c));
            r=k%(int)(Math.pow(10,c));
            sum=s+r;
            if(sum==i)
            System.out.print(i+",");
          
        }
    }
}
