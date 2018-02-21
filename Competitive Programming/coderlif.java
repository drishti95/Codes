import java.util.Scanner;

/**
 * Created by drishti.a on Feb,2018
 */
class coderlif {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int ar[],k,t,i,flag;
        t=Integer.parseInt(sc.nextLine());
        while(t>0)
        {
            ar=new int[30];
            k=0;flag=0;
            for(i=0;i<30;i++)
            {
                ar[i]=sc.nextInt();
                if(ar[i]==1) {
                    k++;
                    if(k>5)
                        flag=1;
                }
                else if(ar[i]==0)
                {
                    k=0;
                }
            }
            if(flag==0)
                System.out.println("#allcodersarefun");
            else
                System.out.println("#coderlifematters");
            t--;
        }
    }
}
