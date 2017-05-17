#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k,c,x,i;
cin>>t;
while(t--)
{
cin>>n>>k;
int ar[n];
for(i=0;i<n;i++)
ar[i]=0;
for(i=0;i<n;i++)
{
cin>>x;
if(x==i+1)
ar[x-1]=-100;
else
ar[x-1]++;
}
c=0;
for(i=0;i<n;i++)
{
if(ar[i]>=k)
c++;
}
cout<<c<<endl;
}
return 0;
}
