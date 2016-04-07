#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,sum,p,*arr,a,b,x,d;
    scanf("%lld",&t);
    arr=new long long int[1000001];
    while(t--)
    {
        p=0;
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<=n;i++)
        {
          x=i;
          d=0;
          b=x%10;
          while(x>=0)
          {
               a=x%10;
               x=x/10;
               if(abs(a-b)>1)
               {
               d=1;
               break;
               }
               b=a;
          }
          if(d==0)
          {
          sum+=i;
          arr[p++]=i;
          }
        }
        cout<<p<<endl;
        cout<<sum<<endl;
        for(i=0;i<p;i++)
        {
          cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
