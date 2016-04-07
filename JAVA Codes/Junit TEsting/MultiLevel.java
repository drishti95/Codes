/*Program: Implementing multilevel inheritance
*Filename : Multilevel.java
*Author:Drishti Agarwal
*Date Of Creation : 09.03.2016
*/

//Superclass 1
class Account
{
	String cust_name;
	int acc_no;
	Account(String a, int b)
	{
		cust_name=a;
		acc_no=b;
	}
	String display_name()
	{
		return cust_name;
	}
	int display_acc()
	{
		return acc_no;
	}
}

//Superclass 2 and subclass 1
class Saving_Acc extends Account
{
	int saving_bal;
	Saving_Acc(String a, int b, int c)
	{
		super(a,b);
		saving_bal=c;
	}
	int display_saving_bal()
	{
		return saving_bal;
	}
}

//Subclass2
class Acct_Details extends Saving_Acc
{
	int deposits;
	Acct_Details(String a, int b, int c, int d)
	{
		super(a,b,c);
		deposits=d;
	}
	int display_deposits()
	{
		return deposits;
	}
}
