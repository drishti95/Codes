import java.io.*;
public class arrangepara
{
    public static void main(String args[])throws IOException
    {
      InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader (read);
        
        System.out.println("Enter the string");
      String s=br.readLine();
      
      
      int i,j,k,f,l,x=0,c=0;
      l=s.length();
      
      String ar[]=new String[l];
      String w="",v="",m="";
      System.out.println("Output");
      
      for(i=0;i<l;i++)
      {
          char a=s.charAt(i);
          if((a=='.')||(a=='?')||(a==',')||(a=='!'))
          {
           for(j=x;j<=i;j++)
           {
               char b=s.charAt(j);
               if((b!='.')&&(b!=',')&&(b!='?')&&(b!='!')&&(b!=' '))
               w=w+b;
               else
               {   char chh=w.charAt(0);
                   if((chh=='A')||(chh=='E')||(chh=='I')||(chh=='O')||(chh=='U')||(chh=='a')||(chh=='e')||(chh=='i')||(chh=='o')||(chh=='u'))
                   v=v+w+",";
                
                   
                   ar[c++]=w;
                   w="";
               }
           }
            
           for(k=0;k<c-1;k++)
           {
               for(f=k+1;f<c;f++)
               {
                   if((ar[k].compareTo(ar[f]))>0)
                   {
                       m=ar[k];
                       ar[k]=ar[f];
                       ar[f]=m;
                   }
               }
           }
           for(k=0;k<c;k++)
          System.out.print(ar[k]+" ");
          System.out.print(a);
     x=i+1;
          c=0;
          
    }
    }
    System.out.println();
    System.out.println("Words starting with Vowels:"+ v);
    }
    }
    
      
           
              
               
                 
           
	           