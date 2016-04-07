import java.io.*;
public class TickBooth
{
private int no_people;
private double amount;

public void initial()
{
no_people=0;
amount=0;
}
public void not_sold()
{
no_people++;
}
public void sold()
{
no_people++;
amount+=2.50;
}
public void displaytotal()
{
System.out.println(no_people + " people visited. ");
}
public void displayticket()
{
int ticket=(int)(amount/2.50);
System.out.println("Tickets Sold  "+ticket);
System.out.println("Total amount collected  " +amount);
}
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(read);

TickBooth stall=new TickBooth();
stall.initial();
int ch;
do
{
System.out.println("Choose one option");
System.out.println("1-The visitor has only signed the ticket");
System.out.println("2-The visitor has purchased the ticket");
System.out.println("3-Exit");
System.out.println("Enter choice-1,2,3");
ch=Integer.parseInt(br.readLine());
switch(ch)
{
case 1:stall.not_sold();
break;
case 2:stall.sold();
break;
case 3:break;
default: System.out.println("Wrong Choice");
}
}while(ch!=3);

stall.displaytotal();
stall.displayticket();
}
}


