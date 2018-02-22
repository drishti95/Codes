import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class rectangl {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int ar[],a,b,t,i,c,d;

        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            ar=new int[4];
            a=0;b=0;c=0;d=0;
            for(i=0;i<4;i++)
            {
                ar[i]=sc.nextInt();
            }
            Arrays.sort(ar);
            if(ar[0]==ar[1] && ar[2]==ar[3])
                System.out.println("YES");
            else
                System.out.println("NO");

            t--;
        }
    }
}
