
import java.io.*;
public class accounts
{
    protected int accno;
    protected double princi;
    accounts(int a, double b)
    {
        accno=a;
        princi=b;
    }
}
class simple extends accounts
{
protected float rate;
protected int time;
protected double si;
simple(float r,int t,int a, double b)
{
super(a,b);
rate=r;
time=t;
}
void interest()
{
si=princi*time*rate/100;
}
void display()
{
System.out.println("Account number="+accno);
System.out.println("Principal="+princi);
System.out.println("rate="+rate);
System.out.println("Time="+time);
System.out.println("Interest="+si);
}
}
class compound extends accounts
{
protected float rate1;
protected int time1;
protected double ci;
compound(float r1,int t1,int a,double b)
{
super(a,b);
rate1=r1;
time1=t1;
}
void interest1()
{
ci=princi*(Math.pow((1+rate1/100),time1))-princi;
}
void display1()
{
System.out.println("Account number="+accno);
System.out.println("Principal="+princi);
System.out.println("rate="+rate1);
System.out.println("Time="+time1);
System.out.println("Interest="+ci);
}
}
class result
{
public static void main(String args[])
{
simple a=new simple(10,2,569,20000.00);
compound x=new compound (10,2,560,30000.00);
a.interest();
a.display();
x.interest1();
x.display1();
}
}


