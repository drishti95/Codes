import java.io.*;
public class encode
{
String s,str;
void input(String st)
{
s=st;
str="";
}
void perform(int move)
{
int ln=s.length();
int t;
char c,c1;
for(int i=0;i<ln;i++)
{
c=s.charAt(i);
t=(int) c;
if(move!=0)
{
t=t+move;
if(t>90)
t=t-26;
if(t<65)
t=t+26;
}
c1=(char)t;
str=str+c1;
}
}
void display()
{
System.out.println("Encrypted string is:" + str);
}
}

    