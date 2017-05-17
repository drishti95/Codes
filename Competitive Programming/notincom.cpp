#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,m,a[1000001],c,i,x;
cin>>t;
while(t--)
{
cin>>n>>m;
c=0;
for(i=0;i<1000001;i++)
a[i]=0;
for(i=0;i<n;i++)
{
cin>>x;
a[x]++;
}
for(i=0;i<m;i++)
{
cin>>x;
if(a[x]!=0)
c++;
}
cout<<c<<endl;
}

return 0;
}
