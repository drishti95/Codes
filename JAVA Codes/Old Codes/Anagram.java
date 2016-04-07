import java.io.*;
public class Anagram
{
    static int a=0;
    static String arr[];
   public static void main(String args[])throws IOException
   {
       InputStreamReader read=new InputStreamReader(System.in);
       BufferedReader in=new BufferedReader(read);
       String str,wrd="";
       System.out.print("Input::");
       str=in.readLine();
       int c;
       c=0;
       int b=0;
       int l=str.length();
       int comb=fact(l);
       System.out.println("Total no of anagram11::="+comb);
       arr=new String[comb];
      
       while(a<comb)
       {
          
               
               for(int j=0;j<l;j++)
               {
                   ab:for(int k=0;k<l;k++)
                  {
                      if(c==l)
                          break ab;
                      if(c==k)
                      {
                          continue;
                      }
                      else
                      {
                          wrd=wrd+str.charAt(k);
                      }
                  }
                  wrd=wrd+str.charAt(c);
                  
                  boolean check=search(wrd);
                  
                  if(a!=0)
                  {
                     if(check==true && a<=comb)
                     {
                         arr[a]=wrd;
                         System.out.println(wrd);
                         a=a+1;
                         wrd="";
                     }
                     c++;
                  }
                  else
                  {
                      arr[a++]=wrd; 
                      wrd="";c++;                     
                  }
              }
             
              c=0;
          
           str=arr[b++];
          l=str.length();
      }
      
      System.out.println("Anagrams:::"+comb);
  }
  public static int fact(int n)
  {
      int f=1;
      for(int i=n;i>0;i--)
         f=f*i;
      return f;
  }
  public static boolean search(String s)
  {
      for(int i=0;i<a;i++)
      {
          if(arr[i]==s)
             return false;
      }
      return true;
  }
}

          
  
  
        
                  
                                            
               
               
           