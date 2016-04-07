#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long int t,m,n,y,ar[100002],diff,i,pos,pro,f;
    char x;
    
    scanf("%lld",&t);
    while(t--)
    {
        
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
            ar[i]=0;
        for(i=0;i<m;i++)
        {
            cin>>x;
            scanf("%lld",&y);
            ar[y]=x;
        }
        f=0;pos=0;pro=1;char c;
        for(i=1;i<=n;i++)
        {

            if(pos)
            {
              if(ar[i]-c!=0 && ar[i]>64 && ar[i]<91)
            {
                diff=i-pos;
                pro=(pro*diff)%1000000009;
                c=ar[i];
                pos=i;
            }
            if (ar[i]-c==0 && ar[i]>64 && ar[i]<91)
                pos=i;
        }

        if(ar[i]!=0 && f==0)
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


