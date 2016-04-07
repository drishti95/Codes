/*Program: Testing multiple catch statements
*Filename : multiplecatchTest.java
*Author:Drishti Agarwal
*Date Of Creation : 24.02.2016
*/
import static org.junit.Assert.*;
import junit.framework.TestCase;


public class multiplecatchTest extends TestCase {
	private int[] input_array;
	
	public void setUp() throws Exception {
		input_array=new int[3];
		input_array[0]=4;
		input_array[1]=2;
		input_array[2]=0;
		
	}

	
	public void tearDown() throws Exception {
	}
	//Testing arithmetic exception 
	public void testRuntimeexcep1() {
		
		String s1="ERROR:Can't Divide by 0";
	
		String output=multiplecatch.runtimeexcep(input_array,0,2);
		assertEquals(s1,output);
		  
	}
	
	//Testing array index out of bounds exception
	public void testRuntimeexcep2() {
	
		String s2="ERROR: Array index out of bounds";
		
		String output2=multiplecatch.runtimeexcep(input_array,0,3);
		assertEquals(s2,output2);
		  
	}
	
	//When there are no exceptions
	public void testRuntimeexcep3() {
		
		String s3="Result is 2";
		
		String output3=multiplecatch.runtimeexcep(input_array,0,1);
		assertEquals(s3,output3);
		  
	}
	

	}

