
import java.io.*;
class Program1
{
 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
 String str[],s;
 int i,n;
 public void takeString() throws Exception
 {
  System.out.println("\nHow many sentences:");
  n=Integer.parseInt(br.readLine());
  if(n<1 || n>9)
  {
    System.out.println("\nINVALID ENTRY:");
    return;
  }
  str=new String[n];
  for(i=0;i< n;i++)
  {
    System.out.println("\nEnter sentence ( ends with full stop):");
    s=br.readLine().trim();
    if(s.charAt(s.length()-1)!='.')
    {
     System.out.println("\nFull stop at the end is mandatory:");
     i--;
     continue;
     }
    str[i]=s;
  }
  for(i=0;i< n;i++)
  {
   s=str[i];
   if(i%2==0)
   encrypt(s);
   else
   reverse(s);
  }
  }
  public void encrypt(String s)
  {
   int i,len;
   char ch;
   String st="";
   len=s.length();
   for(i=0;i< len;i++)
   {
    ch=s.charAt(i);
    
    if (((ch >=65)&&(ch<=90))||((ch >=97)&&(ch <=122)))
    {
       ch=(char)(ch+2);
  if(ch >90 && ch< 97)
  {
   ch=(char)((64+ch-90));
   }
  else if(ch >122)
  {
   ch=(char)((96+ch-122));
   }
 }
  st=st+ch;
  }
 System.out.println(st);
 }

 public void reverse(String s)
 {
  int i;
  String s1;
  s=s.trim();
  s=s.substring(0,s.length()-1);
  while(true)
  {
  i=s.lastIndexOf(" ");
  if(i<0)
  break;
  s1=s.substring(i).trim();
  System.out.print(s1+ " ");
 s=s.substring(0,i).trim();
 }
 System.out.println(s+".");
 }
  public static void main(String args[]) throws Exception
  {
   Program1 ob=new Program1();
   ob.takeString();
   }
   }