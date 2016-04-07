import java.util.*;
import java.io.*;
public class cnote
{
    public static void main(String args[])throws IOException
    {
        int t,n,k,x,y;
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(read);
        t=Integer.parseInt(br.readLine());
        while(t-- !=0)
        {
            x=Integer.parseInt(br.readLine());
            y=Integer.parseInt(br.readLine());
            k=Integer.parseInt(br.readLine());
            n=Integer.parseInt(br.readLine());
            int ar[]=new int[n];
            int arr[]=new int[n];
            for(int i=0;i<n;i++)
            {
                 ar[i]=Integer.parseInt(br.readLine());
                 arr[i]=Integer.parseInt(br.readLine());
            }

            int c=x-y;int i;
            for(i=0;i<n;i++)
            {
               if(ar[i]>=c && arr[i]<=k)
               {
                   System.out.println("LuckyChef");
                   break;
               }

            }
            if(i==n)
                System.out.println("UnluckyChef");

        }
    };
};
