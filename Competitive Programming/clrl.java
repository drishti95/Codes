import java.util.Scanner;

/**
 * Created by drishti.a on Nov,2017
 */
public class clrl {
    public static void main(String[] args)
    {
            int t,i,n,r,d;
            Scanner sc=new Scanner(System.in);
            long ar[],a,b;

            t=Integer.parseInt(sc.nextLine());


            while(t>0)
            {
                n=sc.nextInt();
                r=sc.nextInt();
                ar=new long[n];
                a=-1;
                b=1000000000;
                for(i=0;i<n;i++)
                {
                    ar[i]=sc.nextInt();
                }
                if(n>2) {
                    if (ar[0] > ar[1]) {
                        b = ar[0];
                        d = 0;
                    } else {
                        a = ar[0];
                        d = 1;
                    }
                    for (i = 2; i < n; i++) {
                        if (ar[i] > ar[i - 1] && d == 1) {
                            if (ar[i] < b) {
                                a = ar[i - 1];
                                continue;
                            } else
                                break;
                        } else if (ar[i] < ar[i - 1] && d == 0) {
                            if (ar[i] > a) {
                                b = ar[i - 1];
                                continue;
                            } else
                                break;
                        } else if (ar[i] > ar[i - 1] && d == 0) {
                            d = 1;
                            a = ar[i - 1];
                            if (ar[i] < b)
                                continue;
                            else
                                break;
                        } else if (ar[i] < ar[i - 1] && d == 1) {
                            d = 0;
                            b = ar[i - 1];
                            if (ar[i] > a)
                                continue;
                            else
                                break;
                        }
                    }
                    if (i == n)
                        System.out.println("YES");
                    else
                        System.out.println("NO");
                }
                else
                {
                    if(n>0)
                    System.out.println("YES");
                }

                t--;
            }
        }


}
