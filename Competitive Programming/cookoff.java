import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Created by drishti.a on Dec,2017
 */
class cookoff {
    public static void main(String[] args) {
        int t,a,b,c,d,e,n;
        Scanner sc=new Scanner(System.in);
        t=Integer.parseInt(sc.nextLine());
        String name="";
        while(t>0)
        {
            n=Integer.parseInt(sc.nextLine());
            a=0;b=0;c=0;d=0;e=0;
            while(n>0) {
                name = (sc.nextLine());
                n--;
                if (name.equalsIgnoreCase("simple"))
                    a++;
                if (name.equalsIgnoreCase("easy"))
                    b++;
                if (name.equalsIgnoreCase("cakewalk"))
                    c++;
                if (name.equalsIgnoreCase("easy-medium") || name.equalsIgnoreCase("medium"))
                    d++;
                if (name.equalsIgnoreCase("medium-hard") || name.equalsIgnoreCase("hard"))
                    e++;
            }
            if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0)
            System.out.println("Yes");
            else
            System.out.println("No");
            t--;
        }
    }
}
