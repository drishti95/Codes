#include<stdio.h>
int main()
{
    long long int t,n,a[101],i,j,c,f;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;f=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    {
                        c++;
                        if(j-i==1)
                            f++;
                    }
            }
        }
        if(c==f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
