import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class survive {
    public static void main(String[] args) {
        int t,i,n,k,s,u,c,d,p;

        Scanner sc=new Scanner(System.in);
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            n=sc.nextInt();
            k=sc.nextInt();
            s=sc.nextInt();
            c=k*s;
            d=s-(s/7);
            p=n*d;
            if(p<c)
                System.out.println(-1);
            else
            {
                int x=c/n;
                if(c%n!=0)
                    x++;
                System.out.println(x);
            }
            t--;
        }
    }
}
