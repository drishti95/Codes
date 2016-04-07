#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int p,s=0,i,n,l;
    while(t--)
    {
        scanf("%lld",&p);l=p;n=0;
        for(i=2048;i>0 && l>0;)
        {
            if(l>=i)
            {
                l=l-i;
                n++;
            }
            else
                i=i/2;
        }
        printf("%lld\n",n);
    }
return 0;
}
