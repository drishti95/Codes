import java.io.*;
class empAddress//outer class for employee's address
{
   private String empname;
   private String address;
   private String city;
   private String state;
   
   empIncome income=new empIncome();
   class empIncome//Inner class for employee's inccome
   {
       public double salary,hr,da,gross;
    }//end of inner class empIncome declaration
    public void inputdata(String a,String b,String c,String d,double val)
    {
        empname =a;
        address=b;
        city=c;
        state=d;
        income.salary=(double)val;
    }
    public void printdata()
    {
        System.out.println("-----------------------------------------");
        System.out.println("Employee name:"+empname);
        System.out.println("Employee address:"+address);
        System.out.println("City:"+city);
        System.out.println("State:"+state);
        System.out.println("Basic salary:"+income.salary);
        System.out.println("Dearness Allowance:" +income.da);
        System.out.println("House Rent:"+income.hr);
        System.out.println("Gross Salary:"+income.gross);
    }
    public void cal_da(empAddress xemp)
    {//receiving the emp reference
        income.da=1.2*(income.salary);
    }
    public void cal_hr(empAddress xemp)
    {
        income.hr=0.50*(income.salary);
    }
    public void cal_gross(empAddress xemp)
    {
        income.gross=(income.salary)+(income.hr)+(income.da);
    }
}

public class fun
{
public static void main(String args[])throws IOException
{
empAddress emp=new empAddress();//Method object passes value to the input data
emp.inputdata("Armaanbir Kaur","Rabindra Sarani","Kolkata","West Bengal",1000000.00);
emp.cal_da(emp);
emp.cal_hr(emp);
emp.cal_gross(emp);
emp.printdata();
}
}

        
        
      
    