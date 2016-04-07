#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,ar[500][500],j,c,r,sum,k,x,pos[250000][2];
cin>>t;
while(t--)
{
cin>>n;
sum=0;
x=n*n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cin>>ar[i][j];
k=ar[i][j];
pos[k-1][0]=i;
pos[k-1][1]=j;
}
}
for(i=1;i<x;i++)
{
sum+=abs(pos[i][0]-pos[i-1][0]);
sum+=abs(pos[i][1]-pos[i-1][1]);
}
cout<<sum<<endl;
}
return 0;
}
