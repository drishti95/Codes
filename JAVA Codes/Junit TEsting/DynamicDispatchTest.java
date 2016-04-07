
/*Program: Testing Dynamic method dispatch
*Filename : DynamicDispatchTest.java
*Author:Drishti Agarwal
*Date Of Creation : 09.03.2016
*/

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import junit.framework.TestCase;

public class DynamicDispatchTest extends TestCase {

	@Before
	public void setUp() throws Exception {
		super.setUp();
	}

	
	public void tearDown() throws Exception {
		super.tearDown();
	}
	//testing of method speed() in class Jaguar
	public void test1() 
	{
		Jaguar obj=new Jaguar(1);
		Jaguar obj1;
		obj1=obj;
		String Expected="Max: 90Kmph";
		String output=obj1.speed();
		assertEquals(Expected,output);
	}
		//testing of method speed() in class JaguarXZ
	public void test2() 
	{
		JaguarXZ obj=new JaguarXZ(1,2);
		Jaguar obj1;
		obj1=obj;
		String Expected="Max: 100Kmph";
		String output=obj1.speed();
		assertEquals(Expected,output);
	}
		//individual testing of method speed() in class Jaguar and JaguarXZ
	public void test3() 
	{
		Jaguar obj1=new Jaguar(1);
		JaguarXZ obj2=new JaguarXZ(1,2);
		String output1=obj1.speed();
		String output2=obj2.speed();
		assertNotSame(output1,output2);
	}

}
