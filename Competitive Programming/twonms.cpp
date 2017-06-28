#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,a,b;
cin>>t;
while(t--)
{
cin>>a>>b>>n;
if(n%2)
{
a*=2;
}
if(a>b)
cout<<a/b<<endl;
else
cout<<b/a<<endl;
}
return 0;
}
