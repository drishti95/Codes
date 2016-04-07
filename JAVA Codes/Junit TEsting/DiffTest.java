/*Program: Testing of Comparing string and String Buffer
*Filename : DiffTest.java
*Author:Drishti Agarwal
*Date Of Creation : 24.02.2016
*/

import static org.junit.Assert.*;
import org.junit.Test;

public class DiffTest{
	
	private long t1;
	private long t2;
	
	//Function to test time taken by string and string buffer and asserting that they are not same
	public void testConcatWithString() {
		
		/**
		 * This method tests for the time taken by concatenation of strings
		 * The method generates calls to two methods:
		 * 1) time_string(): computes time taken for concatenation by String class
		 * 2) time_stringbff(): computes time taken for concatenation by StringBuffer class
		 */
		String A="hello";
		String B="java";
		StringBuffer C=new StringBuffer("hello");
		StringBuffer D=new StringBuffer("java");
		t1=Diff.time_string(A,B);// time taken by String class
		t2=Diff.time_stringbff(C,D);//time taken by StringBuffer class
		assertNotSame(t1,t2);
		//pass the test case if two values are not equal
	}


}
