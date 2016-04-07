#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,s,i;
cin>>t;
while(t--)
{
cin>>n;
s=1;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0)
{
s+=i;
if(n/i!=i)
s+=(n/i);
}
}
cout<<s<<endl;
}
return 0;
}
