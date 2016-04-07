#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m,n,*ar,f,a,i;
cin>>t;
while(t--)
{
cin>>n>>m;
ar=new int[n+1];
for ( i = 0 ; i < m ; i++ )
{
cin>>a;
ar[a]=1;
}
f=0;
for(i=1;i<=n;i+1)
{
if(ar[i]==0)
{
if(f%2==0)
ar[i]=-1;
else
ar[i]=-2;
f++;
}
}
for(i=1;i<=n;i++)
{
if(ar[i]==-1)
cout<<i<<" ";
}
cout<<"\n";
for(i=1;i<=n;i++)
{
if(ar[i]==-2)
cout<<i<<" ";
}
cout<<"\n";
}
return 0;
}
