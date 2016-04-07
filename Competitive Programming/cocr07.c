#include<stdio.h>
int main()
{
    long long int k,n,i,ar[100001];
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
        if(ar[i]%2!=0 && ar[i]<k)
            printf("%lld ",ar[i]);
    }
    return 0;
}
