
import java.io.*;
public class inwords
{
	public static void main(String args[])throws IOException
	{
	InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader in=new BufferedReader(read);
	int n,x,y,z,a;
	System.out.println("Enter the number");
	 n=Integer.parseInt(in.readLine());
     x=n/100;
     y=(n/10)%10;
     z=n%10;String s="";
     switch(x)
     {
         case 1:s = s+"One hundred and ";
         break;
         case 2:s = s+"Two hundred and ";
         break;
         case 3:s = s+"Three hundred and ";
         break;
         case 4:s = s+"Four hundred and ";
         break; 
         case 5:s=s+"Five hundred and ";
         break;
         case 6:s=s+"Six hundred and ";
         break;
         case 7:s=s+"Seven hundred and ";
         break; 
         case 8:s=s+"Eight hundred and ";
         break;
         case 9:s=s+"Nine hundred and ";
     }
     
         switch(y)
         {
             case 2:s=s+"Twenty ";
             break;
             case 3:s=s+"Thirty ";
             break;
             case 4:s=s+"Forty ";
             break;
             case 5:s=s+"Fifty ";
             break;
             case 6:s=s+"Sixty ";
             break;
             case 7:s=s+"Seventy ";
             break;
             case 8:s=s+"Eighty ";
             break;
             case 9:s = s+"Ninety ";
         }
        if(y == 1)
        {
            a=n%100;
            switch(a)
            {
                case 11:s=s+"Eleven";
                break;
                case 12:s=s+"Twelve";
                break;
                case 13:s=s+"Thirteen";
                break;
                case 14:s=s+"Fourteen";
                break;
                case 15:s=s+"Fifteen";
                break;
                case 16:s=s+"Sixteen";
                break;
                case 17:s=s+"Seventeen";
                break;
                case 18:s=s+"Eighteen";
                break;
                case 19:s=s+"Nineteen";
            }
                
     }
     else
     {
         switch(z)
         {
          case 1:s=s+"One";
          break;
          case 2:s=s+"Two";
          break;
          case 3:s=s+"Three";
          break;
          case 4:s=s+"Four";
          break;
          case 5:s=s+"Five";
          break;
          case 6:s=s+"Six";
          break;
          case 7:s=s+"Seven";
          break;
          case 8:s=s+"Eight";
          break;
          case 9: s=s+"Nine";
      }
  }
  System.out.println("The number in words is:"+s);
          
}
}
   
        
       