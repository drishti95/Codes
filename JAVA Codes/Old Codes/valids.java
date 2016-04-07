import java.io.*;
public class valids
{
public static void main(String args[])throws IOException
{
InputStreamReader read= new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(read);
String s ;
System.out.println("Enter the string ");
s=br.readLine();
s=s.toUpperCase();
int l=s.length();
int i ,c=0;
for(i=0;i<l;i++)
{
char a =s.charAt(i);
if(a=='(')
c++;
if(a==')')
{
if(c!=1)
{
System.out.println("Sorry! Invalid String");
break;
}
else
c=0;
}
}
if(c==0)
{
for(i=0;i<l;i++)
{
char a=s.charAt(i);
if(a=='(')
{
while(a!=')')
{
i++;
a=s.charAt(i);
}

}
else 
System.out.print(a);
}
}

}}