#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,s,i;
cin>>t;
while(t--)
{
cin>>n;
s=1+n;
if(n==1)
s=1;
for(i=2;i*i<=n;i++)
{
if(n%i==0)
{
s=s+i;
s=s+n/i;
}
if(i*i==n)
s=s-i;
}
cout<<s<<endl;
}

return 0;
}
