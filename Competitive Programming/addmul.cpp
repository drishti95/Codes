#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
long long int n,q,*ar,i,p,x,y,v,sum,d;
cin>>n>>q;
ar=new long long int[n+1];
for(i=0;i<n;i++)
{
cin>>ar[i];
sum+=ar[i];
}
for(i=0;i<q;i++)
{
cin>>p>>x>>y;
if(p!=4)
cin>>v;
if(p==1)
{
d=y-x+1;
sum+=(d*v);
sum%=M;
}
else if(p==2)
{
for(i=x-1;i<y;i++)
{
sum-=ar[i];
ar[i]*=v;
ar[i]%=M;
sum+=ar[i];
sum%=M;
}
}
else if(p==3)
{
for(i=x-1;i<y;i++)
{
sum=sum-ar[i]+v;
}
}
else
{
cout<<sum<<endl;
}
}


return 0;
}
