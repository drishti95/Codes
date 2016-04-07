#include <stdio.h>
int main()
{
    long long int t,m,n,y,diff,i,pos,pro,f;
    char x,c,ar[100002];
    fflush(stdin);
    scanf("%lld",&t);
    while(t--)
    {
        fflush(stdin);
        scanf("%lld %lld",&n,&m);
        for(i=0;i<=n;i++)
            ar[i]='0';
        for(i=0;i<m;i++)
        {
            fflush(stdin);
            scanf("%c %lld",&x,&y);
            ar[y]=x;
        }
        f=0;pos=0;pro=1;
        for(i=1;i<=n;i++)
        {
           if(pos)
            {
              if(ar[i]-c!=0 && ar[i]>='A' && ar[i]<='Z')
            {
                diff=i-pos;
                pro=(pro*diff)%1000000009;
                c=ar[i];
                pos=i;
            }
            if (ar[i]-c==0 && ar[i]>64 && ar[i]<91)
                pos=i;
           }

        if(ar[i]!='0' && f==0)
            {
                f=1;
                c=ar[i];
                pos=i;
            }
        }
        printf("%lld\n",pro);
    }
    return 0;
}


