#include<stdio.h>
int main()
{
    long long int t,n,m,ar[101],i,maxi;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld %lld",&n,&m);
        maxi=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]>maxi)
                maxi=ar[i];
        }
       for(i=0;i<n;i++)
       {
           m=m-maxi+ar[i];
           ar[i]=maxi;
       }
       if(m<0)
        printf("No\n");
       else if(m==0)
            printf("Yes\n");
        else if(m%n==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
