                                                  
                                                                     
                                                                     
                                             

import java.io.*;
class triangular
{
   public static void main()throws IOException
   {
       InputStreamReader read = new InputStreamReader(System.in);
       BufferedReader in = new BufferedReader(read);
       int i,n,s=0,j,k;boolean b=false;int a[]=new int[21];
       System.out.println("Enter the numbers");
       for (j=0;j<21;j++)
       {
       a[j]=Integer.parseInt(in.readLine());
       }
       
       for (j=0;j<21;j++)
       {
       n=a[j];b=false;s=0;
       for (i=1;i<=n;i++)
       {
       s=s+i;
       if (s==n)
       {
         b=true;
         break;
         }
         if (s>n)
         {
            break;
            }
            }
            if (b==true)
           {
           System.out.print(n+"=");
              for (k=1;k<i;k++)
              {
              if (k==(i-1))
              System.out.print(k);
              else
                System.out.print(k+"+");
                
                
                
                }
                System.out.println();
                }}}}
