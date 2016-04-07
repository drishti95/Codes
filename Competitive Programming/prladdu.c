#include<stdio.h>
int main()
{
    long long int t,n,ar[100001],i,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        x=0;
        for(i=0;i<n;i++)
            scanf("%lld",&ar[i]);
        for(i=0;i<n-1;i++)
        {
            ar[i+1]=ar[i+1]+ar[i];
            if(ar[i]>0)
                x=x+ar[i];
            else
                x=x-ar[i];

        }
        printf("%lld\n",x);

    }

    return 0;

}
