#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    long long int n,*ar,maxi=0,mini=0,c1,c2,i,j;
    scanf("%lld",&n);
    ar=(long long int*)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
        mini=1000000000000000;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(ar[j]-ar[i])> maxi)
                {
                maxi=ar[j]-ar[i];
                c1=0;
                }
            if(abs(ar[j]-ar[i])<mini && (ar[j]-ar[i])>0)
              {
                    mini=ar[j]-ar[i];
                    c2=0;
              }
              if(abs(ar[j]-ar[i])== maxi)
                c1++;
            if(abs(ar[j]-ar[i])==mini)
                c2++;
        }
    }

    printf("%lld %lld",c1,c2);

}
