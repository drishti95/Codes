import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class chefchr {
    public static void main(String[] args) {
        int t,i;
        Scanner sc=new Scanner(System.in);
        String name="";
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            int count=0;
            name=sc.next();
            for(i=0;i<=name.length()-4;i++){
                char temp[]= name.substring(i, i+4).toCharArray();
                Arrays.sort(temp);
                String x=new String(temp);
                if(x.equals("cefh"))
                    count++;

            }
            if(count!=0)
                System.out.println("lovely "+count);
            else
                System.out.println("normal");
            t--;
        }
    }
}
