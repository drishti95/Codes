import java.io.*;
public class Time
{
   public static void main(String args[])throws IOException
   {
       InputStreamReader read=new InputStreamReader(System.in);
       BufferedReader in=new BufferedReader(read);
       int h,m,d,r,t;d=0;r=0;t=0;
       System.out.println("Enter the hour part in time::::");
       h=Integer.parseInt(in.readLine());
       System.out.println("Enter the minute part in time::::");
       m=Integer.parseInt(in.readLine());
       System.out.println();
       System.out.println("Time to be converted in words is---->> "+h+":"+m);
       String arr[]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};
       String arr1[]={"ZERO","ZERO","TWENTY","THIRTY","FOURTY","FIFTY"};
       System.out.println();
       
       if(m>=60 && h>=13)
       {
           System.out.println("INVALID");
       }
       else
       {
           System.out.print("Time in words form is---->>");
           if(m==15)
               System.out.print("QUARTER PAST "+arr[h]);       
           else if(m==30)
               System.out.print("HALF PAST "+arr[h]); 
           else if(m==45)
           {  
               if(h==12)
                   System.out.print("QUARTER TO ONE"); 
               else
                   System.out.print("QUARTER TO "+arr[h+1]);
           }
           else if(m<30)
           {
               d=m/10;
               r=m%10;
               if(d==0)
                   System.out.print(arr[m]+" PAST "+arr[h]);  
               else if(d==1)
                   System.out.print(arr[m]+" PAST "+arr[h]);
               else
                   System.out.print(arr1[d]+" "+arr[r]+" PAST "+arr[h]);
           }   
           else
           {
               m=60-m;
               t=h+1;
               d=m/10;
               r=m%10;
                if(d==0)
                   System.out.print(arr[m]+" TO "+arr[t]);  
               else if(d==1)
                   System.out.print(arr[m]+" TO "+arr[t]);
               else
                   System.out.print(arr1[d]+" "+arr[r]+" TO "+arr[t]);
           }
       }
       System.out.println("\n");
       System.out.println("\n");
   }
}
           
               
               
                   
              
               
               
            
           
       
   