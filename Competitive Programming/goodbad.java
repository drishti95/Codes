import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class goodbad {
    public static void main(String[] args) {
        int t,i,n,k,l,u;

        Scanner sc=new Scanner(System.in);
        String x;
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            n=sc.nextInt();
            k=sc.nextInt();
            sc.nextLine();
            x=sc.nextLine();
            l=0;u=0;
            for(i=0;i<x.length();i++){
                if(x.charAt(i)>='a'&& x.charAt(i)<='z')
                    l++;
                else
                    u++;
            }
            if(l<=k && u<=k){
                System.out.println("both");
            }
            else if(l<=k){
                System.out.println("brother");
            }
            else if(u<=k)
                System.out.println("chef");
            else
                System.out.println("none");
            t--;
        }
    }
}
