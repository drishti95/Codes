import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class ccook {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int ar[],k,t,i;
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            ar=new int[5];
            k=0;
            for(i=0;i<5;i++)
            {
                ar[i]=sc.nextInt();
                if(ar[i]==1)
                    k++;
            }
            if(k==0)
                System.out.println("Beginner");
            else if(k==1)
                System.out.println("Junior Developer");
            else if(k==2)
                System.out.println("Middle Developer");
            else if(k==3)
                System.out.println("Senior Developer");
            else if(k==4)
                System.out.println("Hacker");
            else
                System.out.println("Jeff Dean");
            t--;
        }
    }
}
