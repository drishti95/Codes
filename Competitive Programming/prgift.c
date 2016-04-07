#include <stdio.h>

int main()
{
   int t,n,k,i,c=0,a[50];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                c++;
        }
        if(c==n && k==0)
            printf("NO\n");
        else if(c>=k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
