/*Program: Comparing string and String Buffer
*Filename : Diff.java
*Author:Drishti Agarwal
*Date Of Creation : 24.02.2016
*/



public class Diff {
	
	 /** This method performs concatenation of strings using String class
		    *  Inputs to the method: two strings of the class String named str1,str2
		    *  Returns: the concatenated string 
		    */
	   public static String concatWithString(String A,String B)    {  

	        for (int i=0; i<5000; i++){  
	            A = A + B;  
	        }  
// performing concatenation of strings 5000 times
	        return A;  
	    } 
	  /** This method performs concatenation of strings using StringBuffer class
			 *  Inputs to the method: two strings of the class StringBuffer named str1,str2
			 *  Returns: the concatenated string 
			 */
	    public static String concatWithStringBuffer(StringBuffer A,StringBuffer B){  

	        for (int i=0; i<5000; i++){  
	            A.append(B);  
	        }  
	        return A.toString();  
	    } 
/** This method computes the time taken for concatenation of strings using String class
			 *  This method calls method concatWithString(String str1,String str2)
			 *  Inputs to the method: two strings of the class String named str1,str2
			 *  Returns: the time taken for concatenation of string 
			 */
	    public static long time_string(String A,String B){
	        long  startTime = System.currentTimeMillis();  
	        concatWithString(A,B);  
	        long var1= System.currentTimeMillis()-startTime; 
	        return var1;
	    }
/** This method computes the time taken for concatenation of strings using StringBuffer class
			 *  This method calls method concatWithStringBuffer(String str1,String str2)
			 *  Inputs to the method: two strings of the class StringBuffer named str1,str2
			 *  Returns: the time taken for concatenation of string 
			 */
	    public static long time_stringbff(StringBuffer A,StringBuffer B){
	        long  startTime = System.currentTimeMillis();  
	        concatWithStringBuffer(A,B);  
	        long var2= System.currentTimeMillis()-startTime; 
	        return var2;
	    }

	//Main method to run the above methods
	public static void main(String[] args) {
		 String A="good";
         String B="day";
         StringBuffer C = new StringBuffer("good");
         StringBuffer D = new StringBuffer("day");
         long var3=time_string(A,B);
          System.out.println("string"+var3);
         
          long var4=time_stringbff(C,D);
          System.out.println("string bffer"+var4);
          
	}

}
