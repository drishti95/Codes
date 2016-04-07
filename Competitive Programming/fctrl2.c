#include <stdio.h>
int main()
{
  long long int t,n,i,f;
   scanf("%lld",&t);
   while(t--)
   {
       f=1;
       scanf("%lld",&n);
       for(i=n;i>0;i--)
        f=f*i;
        printf("%lld\n",f);
    }
    return 0;
}
