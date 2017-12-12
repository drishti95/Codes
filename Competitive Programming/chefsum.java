import java.util.Scanner;

/**
 * Created by drishti.a on Dec,2017
 */
class chefsum {
    public static void main(String[] args) {
        int t,n,i,index,min,x;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t>0)
        {
            n=sc.nextInt();
            index=-1;min=100001;
            for(i=0;i<n;i++)
            {
                x=sc.nextInt();
                if(x<min){
                    min=x;
                    index=i+1;
                }
            }
            System.out.println(index);
            t--;
        }
    }
}
