
import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class rndpair {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int ar[],t,i,n;
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            n=sc.nextInt();
            ar=new int[n];
            for(i=0;i<n;i++)
            {
                ar[i]=sc.nextInt();
            }
            Arrays.sort(ar);
            double pro;
            int k=1;
            for(i=(n-2);i>=0;i--){
                if(ar[i]!=ar[n-1]) {
                    k=i;
                    break;
                }
            }
            double a=n-i-1;
            double b;
            if(a==1) {
                for (i = k - 1; i >= 0; i--) {
                    if (ar[i] != ar[k])
                        break;
                }
                 b = (k - i)*2;
            }
            else {
                b = (a - 1);
            }
            pro=(a*b)/(n*(n-1));
            System.out.println(String.format("%.6f",pro));
            t--;
        }
    }
}
