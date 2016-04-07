#include <stdio.h>

int main()
{
   long long int t,n,i,j,c=0;
    long long int el[100000],tmp[100001];
    scanf("%lld",&t);
   while (t--)
      {
       c=0;
            scanf("%lld",&n);
            for(j=0;j<n;j++)
                scanf("%lld",&el[j]);
               for(j=0;j<100001;j++)
                tmp[j]=0;
               for (j=0;j<n;j++)
               {
                   if(tmp[el[j]]==0)
                   {
                       c++;
                       tmp[el[j]]=1;

                   }
               }
              printf("%lld\n",c);
    }
    return 0;
}
