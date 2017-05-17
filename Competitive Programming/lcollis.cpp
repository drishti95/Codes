#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,ar[10][10],i,j,c,sum;
cin>>t;
string x;
while(t--)
{
cin>>n>>m;
sum=0;
for(i=0;i<n;i++)
{
cin>>x;
for(j=0;j<x.length();j++)
{
ar[i][j]=x[j]-'0';
}
}
for(i=0;i<m;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(ar[j][i]==1)
c++;
}
if(c>1)
{
sum+=(c*(c-1))/2;
}
}
cout<<sum<<endl;
}

return 0;
}
