#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i;
cin>>t;
while(t--)
{
cin>>n;
long long int x,sum=0,hs=0;
for(i=0;i<n;i++)
{
cin>>x;
sum+=x;
if(i%2)
hs+=x;
}
for(i=0;i<n;i++)
{
cin>>x;
sum+=x;
if(i%2==0)
hs+=x;
}
if(hs>sum-hs)
cout<<sum-hs<<endl;
else
cout<<hs<<endl;
}
return 0;
}
