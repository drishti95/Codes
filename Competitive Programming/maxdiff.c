#include <stdio.h>
int main()
{

    int t,n,k,*p,i,j;
    scanf("%d",&t);
    long long int ar[100];
    long long int sum,diff,tsum,tmp;
    while(t--)
    {
        i=0;
        sum=0;
    diff=0;
    tsum=0;
        scanf("%d %d",&n,&k);
        while(i!=n)
        {
            scanf("%lld",ar[i]);
            tsum=tsum+ar[i++];
        }
        if (k>(n/2))
            k=n-k;
        for(i=0;i<n;i++)
     {
           for(j=0;j<n-i;j++)
           {
                 if(ar[j]>ar[j+1])
                 {
                       tmp=ar[j];
                       ar[j]=ar[j+1];
                       ar[j+1]=tmp;
                 }
           }
     }

       for(i=0;i<k;i++)
        sum=sum+ar[i];

            diff=tsum-sum;
            printf("\n%lld",diff);

    }

}
