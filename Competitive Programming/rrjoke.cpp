#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k,m,d,sum,i;
cin>>t;
while(t--)
{
cin>>n;
sum=1;
for(i=0;i<n;i++)
cin>>m>>d;
for(i=2;i<=n;i++)
{
sum=sum^i;
}
cout<<sum<<endl;
}
return 0;
}

