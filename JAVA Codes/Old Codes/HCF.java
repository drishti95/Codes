import java.io.*;
public class HCF
{
  static int a ,b,hcf,lcm;
    
   HCF()
   {
       a=0;
       b=0;
       hcf=0;lcm=0;
    }
    void getdata()throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(read);
        System.out.println("Enter the first number");
             a=Integer.parseInt(br.readLine());
             System.out.println("Enter the second number");
        
    
         b=Integer.parseInt(br.readLine());
        
        }
         
      void change()
      {
          if(a>b)
          {
          int t=a;
          a=b;
          b=a;
        }
        
        }
        int rec(int p,int q)
        {
            if(p==0)
            return q;
            else 
            return rec (q%p,p);
        }
        void lcm()
        {
            lcm=(a*b)/hcf;
        }
        void result()
        {
            hcf=rec(a,b);
        }
        public static void main(String args[])throws IOException
        {
            HCF obj= new HCF();
            obj.getdata();
            obj.change();
            obj.result();
            obj.lcm();
             
            System.out.println("The HCF of two numbers are : " + hcf);
            System.out.println("The LCM of two numbers are : " + lcm);
        }
    }
    
            
            
            