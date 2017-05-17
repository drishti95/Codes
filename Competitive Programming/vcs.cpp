#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,k,i,r,c1,c2;
cin>>t;
while(t--)
{
cin>>n>>m>>k;
int g[n],p[n];c1=0;c2=0;
for(i=0;i<n;i++)
{
g[i]=0;p[i]=0;
}
for(i=0;i<m;i++)
{
    cin>>r;
    g[r-1]=1;
}
for(i=0;i<k;i++)
{
    cin>>r;
    p[r-1]=1;
}
for(i=0;i<n;i++)
{
if(g[i]==1 && p[i]==1)
c1++;
else if(g[i]==0 && p[i]==0)
c2++;
}
cout<<c1<<" "<<c2<<endl;
}
return 0;
}
