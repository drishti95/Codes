
import java.io.*;

public class party
{
 public static void main(String args[])throws IOException
 {
     InputStreamReader read = new InputStreamReader(System.in);
     BufferedReader br=new BufferedReader(read);
     System.out.println("Enter the number of relatives/friends");
     int n =Integer.parseInt(br.readLine());
     int arr[][]=new int[n][32];
     int i,j,x,c=0;
     boolean p=true;
     for(i=0;i<n;i++)
     {
         System.out.println("Enter available dates for relative/friend "+(i+1));
         for(j=0;j<32;j++)
         {
             x=Integer.parseInt(br.readLine());
             arr[i][x]=x;
             if(x==0)
             break;
            }
        }
        for(j=1;j<31;j++)
        {
            p=true;
            for(i=0;i<n;i++)
            {
                if(arr[i][j]!=j)
                {
                    p=false;
                    break;
                }
            }
            if(p==true)
            {
                System.out.print(j+",");
                c++;
            }
        }
        if(c!=0)
        System.out.println("of the next month are the suitable dates for party");
        else 
        System.out.println("No Suitable Date");
    }
}
