#include<stdio.h>
int main()
{
    long long int t,n,q,l,r,a[100001],temp,i,j,c,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&q);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        while(q--)
        {
            scanf("%lld %lld",&l,&r);
            c=0;
            for(i=l-1;i<r;i++)
            {
                a[i]=0;c++;
            }
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j+1];
                        a[j+1]=a[j];
                        a[j]=temp;
                    }
                }
            }
            for(i=a[c];i>0;i--)
            {
                b=1;
                for(j=c;j<n;j++)
                {
                    if(a[j]%i!=0)
                    {
                        b=0;
                        break;
                    }

                }
                if(b==1)
                {
                    printf("%d\n",i);
                    break;
                }
            }

        }
    }
    return 0;
}
