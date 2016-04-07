/*Program: Implementing Dynamic method dispatch
*Filename : DynamicDispatch.java
*Author:Drishti Agarwal
*Date Of Creation : 09.03.2016
*/




	//Superclass
	class Car
	{
		
		public String vehicleType()
		{
			return "Car";
		}
	}
	//Subclass1 And Superclass 2
	class Jaguar extends Car
	{
		int level1;
		public Jaguar(int var1)
		{
			level1=var1;
		}
		public String brand()
		{
			return "Brand: Jaguar";
		}
		public String speed()
		{
			return "Max: 90Kmph";
		}
	}
	//Subclass 2
	class JaguarXZ extends Jaguar
	{
		int level2;
		public JaguarXZ(int var1,int var2)
		{
			super(var1);
			level2=var2;
		}
		public String speed()
			{
			 	System.out.println(super.speed());
			 	return "Max: 100Kmph";
			}
	}
public class DynamicDispatch
{
	static JaguarXZ obj=new JaguarXZ(1,2);
	public static void main(String[] args)
	{
		 System.out.println(obj.vehicleType());
		 System.out.println(obj.brand());
		 System.out.println(obj.speed());

	}

}
