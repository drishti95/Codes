/*Program: Implementing multiple catch statements
*Filename : multiplecatch.java
*Author:Drishti Agarwal
*Date Of Creation : 24.02.2016
*/



// class to handle multiple catch statements
public class multiplecatch {

	public static String runtimeexcep(int[] input_array,int index1,int index2){
		  
		   try
		   { 		 //normal division if input is correct
			   int result=input_array[index1]/input_array[index2]; 
			   String s="Result is "+result;
			   return s;
			   
		   }
		   catch(ArithmeticException e)
		   {
			   String s="ERROR:Can't Divide by 0";  // error due to dividing by zero
			   return s;
		   }
		   catch(ArrayIndexOutOfBoundsException e)
		   {
			   String s="ERROR: Array index out of bounds";  //error due accessing index out of bounds
			   return s;
		   }
		   
	   }
	  
}
