import java.io.*;

public class permutation
{
   
public static void main(String args[])throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(read);
	
	System.out.println("Enter the number");
	int num=Integer.parseInt(br.readLine());
	
	int i,n=0,x,j,temp,m,f=1,c,d;
	double s=0.0;
	boolean flag = false;
	for(i=num;i>0;i=i/10)
	n++;
	int arr[] = new int[n];
	x=num;
	for(i=0;i<n;i++)
	{
	    arr[i]= x%10;
	    x=x/10;
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n-1-i;j++)
	    {
	        if(arr[j+1]<arr[j])
	        {
	            temp=arr[j];
	            arr[j]=arr[j+1];
	            arr[j+1]=temp;
	        } 
	   } 
    }
    for(i=0;i<n;i++)
    {
        m = arr[i] *(int)(Math.pow(10,n-i-1));
        s=s+m;
    }
    for(i=1;i<=num;i++)
    f=f*i;
    
    System.out.println(s);
    c=1;
    while(c<f)
    {
        s++;
        for(j=(int)s;j>0;j=j/10)
        {
            d=j%10;
            flag=false;
            for(i=0;i<n;i++)
            {
                if(d==arr[i])
                {
                    flag=true;
                    break;
                }
            }
            
            if(flag==true)
            continue;
            else 
            break;
        }
        if(flag==true)
        {
            System.out.println(s);
            c++;
        }
    }
}
} 
        
        
        
        
        
        
        
        
            
            
            
            
            
                
                
                
                
                
                
        
        
        
        
        
        
    
    
    
    
    
    
	   
	            
	            
	            
	            
	            
	            

	   
	   
	   
	   
	   
	   