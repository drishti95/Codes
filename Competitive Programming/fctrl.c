#include <stdio.h>
int main()
{
   long long int t,n,i,c;
   scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld",&n);
        for(i=5;(n/i)>0;i*=5)
       {
        c=c+(n/i);
        }
        printf("%lld\n",c);
    }
    return 0;
}
