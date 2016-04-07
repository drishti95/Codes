#include <stdio.h>
int main()
{
    long long int t,n,i,c,a[101],sum;
    scanf("%lld",&t);
    while(t--)
    {
            sum=0;
        scanf("%lld %lld",&n,&c);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
            sum=sum+a[i];
         if(sum<=c)
         printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
