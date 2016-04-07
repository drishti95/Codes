import java.io.*;
public class decode
{
	public static void main(String args[])throws IOException
	{
	    InputStreamReader read=new InputStreamReader(System.in);
	    BufferedReader br=new BufferedReader (read);
	    
	    System.out.println("Enter the string");
	  String s=br.readLine();
	  String x="",st="",wrd="",str="";
	  int l=s.length(),i,m=0,p,r;
	  for(i=0;i<l;i++)
	  {
	      st="";
	      char a=s.charAt(i);
	      st=st+a;
	      p=Integer.parseInt(st);
	      m=m*10+p;
	      if(m==32||(m>=65&&m<=90)||(m>=97&&m<=122))
	      {
	          x=x+(char)m;
	             m=0;
	         }
	         if(m>122)
	         m=m%10;
	         else if(m>12)
	         m=0;
	         
	     }
	     x=" "+x;
	  l=x.length();   
	  x=x.toLowerCase();
	for(i=0;i<l;i++)
	{
	    char a=x.charAt(i);	
	  
	    if(a==' ')
	    { 
	        
	          char b=x.charAt(i+1);
	          if(b!=' ')
	      {
	        b=(char)(b-32);
	        str=str+" ";
	        str=str+b;
	   }
	        i=i+1;
	}
	else
	str=str+a;
	}
	System.out.println("Input (coded text):     "+s);
	System.out.println("The deccoded string is: "+str);
	}
	}
	
	      
	        
	    
	         
	                  
	          
	      
	    
	          