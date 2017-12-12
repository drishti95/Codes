import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Scanner;

public class elevstrs {
    public static void main(String[] args) {
        int t,n,v1,v2;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t>0) {
             n = sc.nextInt();
             v1 = sc.nextInt();
             v2 = sc.nextInt();
             double s = Math.sqrt(2)*n/v1;
             double e=(double)n*2/v2;
             if(s<e)
                 System.out.println("Stairs");
             else
                 System.out.println("Elevator");
             t--;
        }

    }
}
