#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,k,i,m=0;
cin>>t;
while(t--)
{
m=0;
cin>>n>>k;
for(i=2;i<=k;i++)
{
if(n%i>m)
m=n%i;
}

cout<<m<<endl;
}
return 0;
}
