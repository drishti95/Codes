import java.util.Scanner;

/**
 * Created by drishti.a on Nov,2017
 */
public class viltribe {
    public static void main(String[] args) {
        int t,i,a,b,p,index;
        Scanner sc=new Scanner(System.in);
        String name="";

        t=Integer.parseInt(sc.nextLine());


        while(t>0)
        {
            name=sc.nextLine();
            a=0;b=0;p=0;
            index=0;
            for(i=0;i<name.length();i++)
            {
                if(name.charAt(i)=='A') {
                    a++;
                    if(p==1)
                        a+=i-index-1;
                    index=i;
                    p=1;
                }
                else if(name.charAt(i)=='B'){
                    b++;
                    if(p==2)
                        b+=i-index-1;
                    index=i;
                    p=2;
                }
                else
                {

                }
            }
            System.out.println(a+" "+b);
            t--;
        }
    }
}
