#include<stdio.h>
int main()
{
    long long int t,x,y,k,n,p,c,i;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&x,&y,&k,&n);
        y=x-y;
        int flag=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&p);
            scanf("%lld",&c);
            if(p>=y && c<=k)
                flag=1;
        }

         if(flag==0)
            printf("UnluckyChef\n");
         else
            printf("LuckyChef\n");
    }
    return 0;
}
