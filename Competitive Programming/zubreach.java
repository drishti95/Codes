import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class zubreach {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t,i,n,m,x,y,l,p,q,f;
        t=Integer.parseInt(sc.nextLine());
        f=1;
        while(t>0)
        {
            m=sc.nextInt();
            n=sc.nextInt();
            x=sc.nextInt();
            y=sc.nextInt();
            l=sc.nextInt();
            sc.nextLine();
            String a=sc.nextLine();
            p=0;q=0;
            for(i=0;i<l;i++)
            {
                if(a.charAt(i)=='U')
                    p++;
                else if(a.charAt(i)=='L')
                    q--;
                else if(a.charAt(i)=='R')
                    q++;
                else
                    p--;

            }
            System.out.println("Case "+f+": ");
            if(p<0||q>m||q<0||p>n){
                System.out.println("DANGER");
            }
            else if (q==x && p==y){
                System.out.println("REACHED");
            }
            else
                System.out.println("SOMEWHERE");
            t--;
            f++;
        }
    }
}
