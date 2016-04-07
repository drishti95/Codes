
   import java.io.*;
 public class insertion
 {
  public void sort(int num[])
 {  int l=num.length;
   for(int i=0;i<l;i++)
   {
   int key=num[i];
   int pos=i;
   while(pos>0 && num[pos-1]>key)
   {   num[pos]=num[pos-1];
   pos--;
   }
   num[pos]=key;
   }
   System.out.println("The numbers after sorting are:");
   for(int i=0;i<l;i++)
   {
   System.out.println(num[i]);
   }
   }
   
   public static void main(String args[])throws IOException
 {
   InputStreamReader read = new InputStreamReader(System.in);
   BufferedReader in = new BufferedReader(read);
   int n;
   System.out.println("Enter the size of array ");
   n=Integer.parseInt(in.readLine());
   insertion obj = new insertion();
   int arr[] = new int[n];
   System.out.println("Enter the numbers");
  for(int i=0;i<n;i++)
  {
   arr[i]=Integer.parseInt(in.readLine());
   }
   obj.sort(arr);
   }
   }
 