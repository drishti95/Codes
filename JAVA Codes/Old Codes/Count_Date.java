import java.io.*;
public class Count_Date
{
   public static void main(String args[])throws IOException
   {
      InputStreamReader read=new InputStreamReader(System.in);
      BufferedReader in=new BufferedReader(read);
      int d1,d2,m1,m2,y1,y2;
      int leap[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
      int nonleap[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
      int sum,i,j,tmp;sum=0;i=0;j=0;tmp=0;
      System.out.println();
      System.out.println();
      System.out.println();
      System.out.print("FIRST DATE::::::    ");
      System.out.println();
      System.out.print("Day-->");
      d1=Integer.parseInt(in.readLine());
      System.out.print("Month-->");
      m1=Integer.parseInt(in.readLine());
      System.out.print("Year-->");
      y1=Integer.parseInt(in.readLine());
      System.out.println();
      System.out.println("SECOND DATE::::::     ");
      
      System.out.print("Day-->");
      d2=Integer.parseInt(in.readLine());
      System.out.print("Month-->");
      m2=Integer.parseInt(in.readLine());
      System.out.print("Year-->");
      y2=Integer.parseInt(in.readLine());
      System.out.println();System.out.println();
      if(y1>y2)
      {
        tmp=y1;
        y1=y2;
        y2=tmp;
        tmp=0;
        tmp=m1;
        m1=m2;
        m2=tmp;
        tmp=0;
        tmp=d1;
        d1=d2;
        d2=tmp;
       }
      for(i=(y1+1);i<y2;i++)
      {
         if((i%400==0||i%4==0))
         {
            for(j=1;j<=12;j++)
            {
               sum=sum+leap[j];
            }
         }
         else
         {
            for(j=1;j<=12;j++)
            {
              sum=sum+nonleap[j];
            }
         }
       }
       if(y1%400==0||y1%4==0)
       { 
         if(y2%400==0||y2%4==0)
         { 
            for(i=(m1+1);i<=12;i++)
            sum=sum+leap[i];
            for(j=(m2-1);j>0;j--)
            sum=sum+leap[j];
          }
         else
         {
         for(i=(m1+1);i<=12;i++)
            sum=sum+leap[i];
         for(j=(m2-1);j>0;j--)
            sum=sum+nonleap[j];
         }
         sum=sum-d1+d2;
       }
       else
       {
        if(y2%400==0||y2%4==0)
         { 
            for(i=(m1+1);i<=12;i++)
            sum=sum+nonleap[i];
            for(j=(m2-1);j>0;j--)
            sum=sum+leap[j];
         }
         else
         {
         for(i=(m1+1);i<=12;i++) 
            sum=sum+nonleap[i];
         for(j=(m2-1);j>0;j--)
            sum=sum+nonleap[j];
          }
         sum=sum+d2-d1;
       }
       System.out.println("Number of days between the given two dates are::::: "+sum);
   }
}   
       
  
   
