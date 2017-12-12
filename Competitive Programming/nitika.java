import java.util.Scanner;

/**
 * Created by drishti.a on Nov,2017
 */
public class nitika {
    public static void main(String[] args) {
        int t,i;
        Scanner sc=new Scanner(System.in);
        String name="";
        String newName,rest;

        t=Integer.parseInt(sc.nextLine());

        boolean first=true;
        while(t>0)
        {
            name=sc.nextLine();
            first=true;
            name=name.toLowerCase();
            newName="";rest="";
            for(i=0;i<name.length();i++)
            {
                if(first){
                    newName+= (char)(name.charAt(i)-32);
                    first=false;
                }
                else
                {
                    rest+=name.charAt(i);
                }
                if(name.charAt(i)==' '){
                    first=true;
                    rest="";
                    newName+=". ";
                }
            }
            newName+=rest;
            System.out.println(newName);
            t--;
        }
    }
}
