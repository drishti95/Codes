import java.util.Scanner;

/**
 * Created by drishti.a on Dec,2017
 */
class bugcal {
    public static void main(String[] args) {
        int t;long a,b,c;
        Scanner sc=new Scanner(System.in);
        String x;
        t=sc.nextInt();
        while(t>0)
        {
            a=sc.nextLong();
            b=sc.nextLong();
            x="";
            c=0;
            while(a>0 || b>0)
            {
                if(a>0)
                    c+=a%10;
                if(b>0)
                    c+=b%10;
                c=c%10;
                x=c+x;
                c=0;
                a/=10;
                b/=10;
            }
            System.out.println(Long.parseLong(x));
            t--;
        }
    }
}

