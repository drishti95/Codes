#include <stdio.h>
int main()
{
long long int t,n,ar[100001],i,c,j;

scanf("%lld",&t);
while(t--)
{
    c=0;
    scanf("%lld",&n);
    for(i=0;i<100001;i++)
        ar[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        ar[j]++;
    }
    for(i=0;i<100001;i++)
    {
       if(ar[i]>=1)
       c++;

    }

printf("%lld\n",c);
}
}
