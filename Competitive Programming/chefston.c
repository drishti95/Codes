#include <stdio.h>

int main()
{
    long long int t,n,k,a[100001],b[100001],i,maxi,sum,j,pro;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
        maxi=0;
        for(i=0;i<n;i++)
        {
            sum=0;pro=0;
            while(sum<=k)
            {
                sum=sum+a[i];
                if(sum>k)
                {
                   sum=sum-a[i];
                   break;
                }
                pro=pro+b[i];

            }
            if(pro>maxi)
                            maxi=pro;
        }
        printf("\n%lld",maxi);
    }
	return 0;
}


