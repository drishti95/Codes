import java.io.*;
public class splsent
{
   
	public static void main(String args[])throws IOException


	{
	    InputStreamReader read=new InputStreamReader(System.in);
	    BufferedReader br=new BufferedReader (read);
	    
	    System.out.println("Enter the string");
	  String s=br.readLine();
	  System.out.println(" Enter the numbers");
	  int a,b;a=0;b=0;
	  while(a<=0||b<=0)
	  {
	  a=Integer.parseInt(br.readLine());
	  b=Integer.parseInt(br.readLine());
	  if(a<=0||b<=0)
	  System.out.println("Numbers not positive,re-enter");
	  else 
	  break;
}
	  char r;
	  s=s+" ";
	  String w="",sn="";
	  int i,f=0,l=s.length(),j,x;
	  for(i=0;i<l;i++)
	  {
	      char c=s.charAt(i);
	      if(c!=' ')
	      w=w+c;
	      else
	      {
	          sn=sn+" ";
	          f++;
	          if((f==a)||(f==b))
	          {
	              for(j=0;j<w.length();j++)
	              {
	                  char m=w.charAt(j);
	                  if(m>='a'&&m<='z')
	                  {
	                      x=(int)m;
	                      x++;
	                      if(x>122)
	                      x=x-26;
	                      m=(char)x;
	                      sn=sn+m;
	                      
	                  }
	                  
	                  else if(m>='A'&&m<='Z')
	                  {
	                      x=(int)m;
	                      x++;
	                      if(x>90)
	                      x=x-26;
	                      m=(char)x;
	                      sn=sn+m;
	                  }
	              }
	          }
	          else
	          sn=sn+w;
	          w="";
	      }
	  }
	  System.out.println("Input Sentence:     "+s);
	  System.out.println("Input Integers:     "+a+','+b);
	  System.out.println("Output Sentence:    "+sn);
	     }
	 }
	 
	    