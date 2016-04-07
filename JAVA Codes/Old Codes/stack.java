import java.io.*;
public class stack
{
	int maxi=10;
	int arr[]=new int[maxi];
	int top,k;
	
stack()
{
top=-1;}
public void push(int data)
{
if(top==maxi-1)
{
System.out.println("Stack is full!!");
}
else
{
top++;
arr[top]=data;
}
}
public int pop()
{
if(top==-1)
{
System.out.println("Stack is empty!!");	
return 0;}
else
{
int dat=arr[top];
top--;
return dat;
}
}
public void display()
{
if(top==-1)
System.out.println("Stack is empty");	
else
{
System.out.println("Content of stack..\n ");
for(k=top;k>=0;k--)
System.out.println(arr[k]);

}
}
public static void main(String args[])throws IOException
{
InputStreamReader ISR=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(ISR);
int number,option;
String ch="Yes";
stack obj=new stack();
do
{
System.out.println("\t\t\t\tMAIN MENU");
System.out.println("\t\t1-->PUSH");
System.out.println("\t\t2-->POP");
System.out.println("\t\t3-->DISPLAY");
System.out.println("\t\t4-->EXIT");
option=0;
if(ch.compareTo("Yes")==0||ch.compareTo("yes")==0||ch.compareTo("YES")==0)
System.out.println("Enter Option");
option=Integer.parseInt(br.readLine());
switch(option)
{
case 1:
System.out.println("Enter a number");
try{
number=Integer.parseInt(br.readLine());
obj.push(number);
System.out.println("pushed-"+number);
}
catch(Exception e)
{
System.out.println(e);
}
break;
case 2:
int k=obj.pop();
System.out.println("Popped item is "+k);
break;
case 3:
System.out.println("...Displaying the stack...\n");
obj.display();
break;
case 4:
System.out.println("Terminating the program");
System.exit(0);
break;
default:System.out.println("Not a valid option!Try again");
}
System.out.println("\n\ndo you wish to continue...(Yes/No)");
ch=br.readLine();
}while(ch.compareTo("Yes")==0||ch.compareTo("yes")==0||ch.compareTo("YES")==0);
}
}

