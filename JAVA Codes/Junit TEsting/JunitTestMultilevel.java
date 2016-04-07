/*Program: Testing multilevel inheritance
*Filename : JunitTestMultilevel.java
*Author:Drishti Agarwal
*Date Of Creation : 09.03.2016
*/


import org.junit.Assert.*;
import junit.framework.TestCase;

public class JunitTestMultilevel extends TestCase{

	String name;
    int account,saving_balance,deposit;
	public void setUp() throws Exception 
	{
	//Initialising Values to test inheritance 
	name="Drishti";
	account=42;
	saving_balance=90;
	deposit=100;
	}

	public void tearDown() throws Exception {
	}
	//Function to test the function display_name in Superclass Account
	public void testdisplay_name()
	{
	Acct_Details r=new Acct_Details(name,account,saving_balance,deposit);
     String n=r.display_name();
     assertEquals(n,name);
	}
		//Function to test the function display_acc in Superclass Account
  public void testdisplay_acc()
  {
	  Acct_Details r=new Acct_Details(name,account,saving_balance,deposit);
	     int a=r.display_acc();
	     assertEquals(a,account);
  }
		//Function to test the function display_saving_bal in Subclass Saving_Acc
  public void testdisplay_saving_bal()
  {
	  Acct_Details r=new Acct_Details(name,account,saving_balance,deposit);
	    int s=r.display_saving_bal();
	     assertEquals(s,saving_balance);
  }
	//Function to test the function display_deposits in Subclass Acct_Details
  public void testdisplay_deposits()
  {
	  Acct_Details r=new Acct_Details(name,account,saving_balance,deposit);
	     int d=r.display_deposits();
	     assertEquals(d,deposit);
  }

}
