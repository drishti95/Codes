import java.io.*;

public class Abc
{
public static void main(String args[])throws IOException
{
FileWriter fw=new FileWriter("library.txt");
BufferedWriter buff = new BufferedWriter(fw);
PrintWriter pr=new PrintWriter(buff);

BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
BufferedReader bb=new BufferedReader(new InputStreamReader(System.in));

char ch='Y';
int cnt=0,ctr=0;

for(;ch=='Y';)
{
cnt+=1;
System.out.println("Enter name,member no.,address, book issued");
String name=br.readLine();
String mno=br.readLine();
String add=br.readLine();
String bk=br.readLine();

pr.println(name);
pr.println(mno);
pr.println(add);
pr.println(bk);

if(add.equalsIgnoreCase("New Delhi"))
ctr+=1;
System.out.println("Do you want to add a new record? Press Y for yes");
ch=(char)(bb.read());
pr.close();
System.out.println("No.of members of library are:"+cnt);
System.out.println("No.of members of address New Delhi: "+ctr);

}
}
}

