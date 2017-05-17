#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k,m[10],d[10],sum,i;
cin>>t;
while(t--)
{
cin>>n>>k;
sum=0;
for(i=0;i<n;i++)
cin>>m[i]>>d[i];
for(i=0;i<n;i++)
{
if(m[i]<=k)
k-=m[i];
else
{
m[i]-=k;
k=0;
sum+=m[i]*d[i];
}
}
cout<<sum<<endl;
}
return 0;
}
