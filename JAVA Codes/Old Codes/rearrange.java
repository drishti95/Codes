import java.io.*;
class rearrange
{
String txt,cxt;
int len;
rearrange()
{
txt="";
cxt="";
len=0;
}
void readWord()throws IOException
{
InputStreamReader read= new InputStreamReader (System.in);
BufferedReader br=new BufferedReader(read);
System.out.println("Enter a word in upper case");
txt=br.readLine();
}
void convert()
{
char ch;
int i,flag=0;
len=txt.length();
ch=txt.charAt(0);

if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
cxt=txt+"Y";
else
{
for(i=0;i<len;i++)
{
ch=txt.charAt(i);
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
cxt=txt.substring(i)+txt.substring(0,i)+"C";
flag=1;
break;
}
}
if(flag==0)
cxt=txt+"N";
}
}
void display()
{
System.out.println("Original Word : "+txt);
System.out.println("Changed Word : "+cxt);
}
public static void main(String args[])throws IOException
{
rearrange obj=new rearrange();
obj.readWord();
obj.convert();
obj.display();
}
}

