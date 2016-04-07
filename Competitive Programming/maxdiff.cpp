#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,n,j,i,k,ar[100];
    scanf("%lld",&t);
    long long int sum,diff1,tsum,tmp,diff2,ans;
    while(t--)
    {
        tsum=0;diff1=0;diff2=0;ans=0;sum=0;

        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            tsum=tsum+ar[i];
        }
        sort(ar,ar+n);

     for(i=0;i<k;i++)
     {
     sum=sum+ar[i];
     }
     diff1=(tsum-2*sum);
     if(diff1<0)
     diff1*=-1;

     sum=0;
     for(i=n-1;i>n-1-k;i--)
     {
     sum=sum+ar[i];
     }
     diff2=(tsum-2*sum);
     if(diff2<0)
     diff2*=-1;

     ans=diff1>diff2?diff1:diff2;
     cout<<ans<<endl;

 }
 return 0;
 }
