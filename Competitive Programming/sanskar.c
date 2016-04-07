#include <stdio.h>
int main()
{
    long long int t,i,n,k,s[22],sum;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++)
            scanf("%lld",&s[i]);
        for(i=0;i<n;i++)
            sum=sum+s[i];
            if(sum%k==0)
                printf("yes\n");
            else
                printf("no\n");
    }
    return 0;
}
