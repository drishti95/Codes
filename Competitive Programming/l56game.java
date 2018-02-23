import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class l56game {
    public static void main(String[] args) {
        int t,i,n,c;

        Scanner sc=new Scanner(System.in);
        String x;
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            n=sc.nextInt();
            c=0;
            for(i=0;i<n;i++){
                if(sc.nextInt()%2!=0)
                    c++;
            }
           if(c%2==0 || n==1)
               System.out.println(1);
            else
               System.out.println(2);
            t--;
        }
    }
}
