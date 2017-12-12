import java.util.Scanner;

/**
 * Created by drishti.a on Dec,2017
 */
class matpan {
    public static void main(String[] args) {
        int t,i;
        long c;
        Scanner sc=new Scanner(System.in);
        String x;
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            long ar[]=new long[26];
            c=0;i=0;
            while(i<26) {
                ar[i]=sc.nextLong();
                i++;
            }
            x=sc.nextLine();
            x=sc.nextLine();
            i=0;
            for(i=0;i<x.length();i++){
                ar[x.charAt(i)-'a']=0;
            }
            i=0;
            for(i=0;i<26;i++)
                c+=ar[i];
            System.out.println(c);
            t--;
        }
    }
}
